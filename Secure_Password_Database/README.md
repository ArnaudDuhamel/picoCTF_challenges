# Write-up Secure Password Database

## Challenge

This challenge provided a binary file in which the user had to input the right hash value in order for the flag to be printed in the console.

### 1. Putting the file in a decompiler

The first step I took was to insert the binary file in a decmompiler. I used [Decompiler Express](https://dogbolt.org/).

I worked with two decompilers: Ghydra & Binary Ninja. The output of each decompiler is included in the folder.

### 2. Finding the required hash

I first started to go through the decompiled code. It took me a lot of time, a lot of effort and multiple readings to figure out what was happening in the code.

But what I managed to identify early was that, to have the code reveal the flag, this line of code was central:

```cpp
if (local_f8 == local_100) {
```

Essentially, if the submitted hash is a certain predefined value, the flag will be revealed.

So I then set myself to discovering what that value is. This was perhaps not what the creators of the challenged had in mind, but I considered this to be fastest and most effective to get the flag.

But then I was stuck because I had no clue as to how I could figure out what was that required value.

That was until I happened to open another PicoCTF challenge named "Bypass Me". This challenge specifically prescribed to analyse a binary file with a tool named LLDB.

I researched the tool and figured out it was a debugger that can analyze running binary files.

But there was an issue, it was very difficult to find web shells that allowed the use of LLDB. That's when I understood that if I wanted to be serious about learning new skills and new tools, I had to build my own local environment.

So I took a lot of time and invested in setting up my own environment. So I setup a virtual machine based on Linux Ubuntu Jammy Jellyfish. And there, I set up LLDB, Visual Studio Code and Git.

### 3. Using LLDB

Right before starting to use LLDB on the binary file of the challenge, I ran the following command

```
strings <challenge_binary_file>
```
The strings that were the most interestings were the names of the 3 following functions:

```
hash
make_secret
main
```

This confirmed that these function names were right and they were actually present in the binary code.

I was now ready to use LLDB on the binary file of the challenge.

The first step is to load the binary in lldb:

```
lldb ./challenge_binary_file
```

The next step was to set breakpoints. In my case, only a breakpoint at the hash function was needed:

```
b hash
```

We then start running the program:

```
run
```

And then we can go through the assembly code line by line after reaching the breakpoint with this command:

```
next
```

I went through the code line by line countless of times to properly identify the line showed above. It turned out to be this one:

```
    frame #0: 0x000055555555567e system.out`main + 686
system.out`main:
->  0x55555555567e <+686>: movq   -0xf0(%rbp), %rax
    0x555555555685 <+693>: cmpq   -0xf8(%rbp), %rax
    0x55555555568c <+700>: jne    0x55555555572a            ; <+858>
    0x555555555692 <+706>: leaq   0xa60(%rip), %rax
```

The value that we must read is exactly `-0xf0(%rbp)`.

Also this step took me a long time to figure out. How to read this value.

It turns out that the following command returns the right value:

```
memory read --format u --size 8 --count 1 $rbp-0xf0
```

Format u means unsigned. Size 8 means 8 bytes. Count 1 means that it will print the first 8 bytes.

This commands matches with the hash function provided by Binary Ninja, where it returns an uint64:

```cpp
int64_t hash(char* arg1)
```

The command outputs the following:

```
0x7fffffffdd90: 15237662580160011234
```

This then reveals the flag:

```
Please set a password for your account:
a
How many bytes in length is your password?
100
You entered: 100
Your successfully stored password:
97 10 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 105 85 98 104 56 49 33 106 42 104 110 33 -86 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
Enter your hash to access your account!
15237662580160011234
Could not open flag.txt: No such file or directory
```

In the example, the flag was not revealed because I did not run the binary in the challenge environment.

### 4. Recreating the code

After I found the answer, I set myself on recreating the code. A code that would input the appropriate value and return the hash that would reveal the flag. Having an answer to test my code against made it much easier.

But before achieving that, I needed to understand the decompiled code. So I went back to that.

The first clue came from ChatGPT itself. It pointed to the string `heartbleed.c` and that this was a clue pointing to reading what is in the variable storing the password input.

To do that, one enters a short password. 1 character is enough. And then when the programs asks how many bytes the password has, enter a big number, like 100. This will return the submitted password and the secret value stored in the password variable. It will be returned as integers. Like this:

```
Please set a password for your account:
a
How many bytes in length is your password?
100
You entered: 100
Your successfully stored password:
97 10 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 105 85 98 104 56 49 33 106 42 104 110 33 -86 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
Enter your hash to access your account!
```

The secret value we are looking for is `105 85 98 104 56 49 33 106 42 104 110 33`.