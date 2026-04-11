# Write-up Gatekeeper

## Challenge

In this challenge, the program prompts for an input, and if it respects the set criterias, the flag is presented. However, the flag string is also manipulated. So the manipulation must be reversed to be able to use the flag.

### 1. Running the challenge code and the provided binary

I first ran the program just to get an idea.

### 2. Decompilation

I then proceeded to decompile the unpacked binary.

I inserted the binary file in a decmompiler. I used [Decompiler Express](https://dogbolt.org/).

I worked with two decompilers: Ghidra & Binary Ninja. The output of each decompiler is included in the folder.

I then skimmed through the decompiler output.

### 3. Figuring out the input criterias

The input criterias can be found here:

```
if (var_40_1 <= 0x3e7)
    puts("Too small.");
else if (var_40_1 > 0x270f)
    puts("Too high.");
else if (rax_3 != 3)
    puts("Access Denied.");
else
    reveal_flag();
```

The first if statement indicates that the input has to be bigger then 999.

The second if statement indicates the input has to be smaller or equal 9999.

And then the third if statement mentions that the input must be 3 characters.

In trying to figure out what would match the criterias, I remembered seeing in the decompiled code the following line: `if (is_valid_hex(&nptr))`. That's what gave me the hint that the input had to be a number in hex.

So I opened a decimal to hex converter online and converted 1000 to hex, which gave 3E8. I input that in the program and it worked. The flag was presented.

However, I noticed the flag was manipulated. I looked at the string and Thought much over it. I noticed that it felt like the string was reversed. But then the string also felt wrong.

So I went into the `reveal_flag` function and saw this: 

```
if (!(i & 3))
    printf("ftc_oc_ip");
```

So I remobed all the "ftc_oc_ip", then reversed the string. And there I had it, the flag.

### 6. Recreating the code

I reversed engineered the `reveal_flag` function and also created a function that reverses the string manipulation.