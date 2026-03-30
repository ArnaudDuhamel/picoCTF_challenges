# Write-up Secure Password Database

## Challenge

In this challenge, a program runs multiple scripts asking for a secret one after the other. But the secret has to be entered within 1 second of the prompt being shown. A total of 20 scripts are run.

The program display the binaries of each script in hexadecimal in plain text before asking for the secret. Like this:

```
Welcome! I think I'm pretty good at reverse enginnering. There's NO WAY anyone's better than me. Wanna try? I have 20 binaries I'm going to send you and you have 1 second EACH to get the secret in each one. Good luck >:)
3203613641
Here's the next binary in bytes:
7f454c4602010100000000000000000002003e000100000050104000000000004000000000000000283900...
What's the secret?:
```

### 1. Converting the provided hex in a binary file

The first step I took was to convert the provided hexes in binaries with this command:

```
xxd -r -p binary.hex binary.bin
```

I then ran the program. It was asking for a secret and returning wether or not the user input matched the secret:

```
What's the secret?
1
Nice try :(
```

I then proceeded to decompile the binary in a decompiler using [Decompiler Express](https://dogbolt.org/).

I worked with two decompilers: Ghydra & Binary Ninja. The output of each decompiler is included in the folder.

### 2. Finding the secret

As it turns out, the secret was a hardcoded integer inside the script: `int32_t var_c = 0xbef343c9;`. In decimal: `3203613641`.

The script would then return Correct!:

```
What's the secret?
3203613641
Correct!
```

I then noticed that this secret was provided in the output of the main program.

It was at this point that I understood that, to be able to collect the flag, I needed a program to read the secret of the script everytime the program was presenting it and be able to provide it as input when prompted to submit the secret.

### 3. Using Expect

I tried to find a tool that could do just that and so I asked ChatGPT. It proposed Expect. And so I set out to use it. ChatGPT told me how to use simple strings to catch program output as well as regular expressions. I needed regular expressions to catch the secrets and store them in a variable that would then be used to send the secret as input. And then I also used ChatGPT to see how to use loops in expect.

I struggled quite a lot to get the flow right. My expect code was often reusing the first secret it cought instead of using the second one. And it would also often catch the hex numbers instead of the secret.

I then found on Stack Overflow that one can use `exp_internal 1` to see what is going on when an Expect script runs. And to see why it Expect doesn't catch what it is supposed to catch. It was very hard to get an overview because the hex of the scripts were clogging the console. But in the end, the script in the repository managed to consistently catch the secrets and submit it for 20 iterations. I ran it multiple times and it revealed the flag everytime.

### 4. Recreating a script

I recreated a script asking for a secret.