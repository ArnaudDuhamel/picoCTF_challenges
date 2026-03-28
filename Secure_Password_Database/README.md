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