# Write-up Hidden Cipher 2

## Challenge

In this challenge, the flag is presented to the user, but is encrypted. The whole challenge is to decrypt the flag. Just as the first Hidden Cipher challenge.

### 1. Running the challenge code and the provided binary

The first thing I did was to run the official challenge. I was asked to answer a simple math calculation. What is 1 + 2? What is 7 * 3? If I answered wrong, the program would stop. If I answered right, the program would provide me an encrypted flag. 

Idownloaded the provided material. It was the challenge's binary file and a text file from which the binary reads a fake flag.

I then tried to run the downloaded binaries. I was then told that I needed GLIBC version 2.38 to run  the binaries. I ran the command `ldd --version` command and I saw that I only have 2.35. I did ask ChatGPT and look onlinen about how I could get or upgrade to version 2.38 but it is something that is not recommended at all. I picked the distro that I currently have because it is known for working well with Virtual Box.

There seemed to workarounds but it felt like it was an unnecessary rabbit hole. So I did not explore this part further.

What I did instead was to insert the provided binary file in decompilers.

### 2. Decompiling binary files

I used [Decompiler Express](https://dogbolt.org/).

I worked with two decompilers: Ghydra & Binary Ninja. The output of each decompiler is included in the folder.

### 3. Figuring out the cipher and they

For the cipher, the first important lines of code are those ones (from Binary Ninja output):

```cpp
else if (rax_3 == var_20)
{
    void* rax_10 = read_flag_file("flag.txt");

    if (rax_10)
    {
        encode_flag(rax_10, rax_3);
        free(rax_10);
        result = 0;
    }
```

The first line indicates that, to go further in the program, we have to answer the math question right.

But then we see further down that the answer to the match question is passed into the "encode_flag" function, along with the flag string itself. So the answer to the match question plays a part in the encoding of the flag. But which one?

The answer comes from those lines in the "encode_flag" function:

```cpp
int64_t encode_flag(void* arg1, int32_t arg2)
{
    puts("Encoded flag values:");
    int32_t var_c = 0;

    while (*(arg1 + var_c))
    {
        printf("%d", *(arg1 + var_c) * arg2, &data_40201d);
```

A loop goes through all the characters of the flag and multiplies them by the answer to the math question.

So the cipher is the multiplication, and the key is the answer to the math question. 

To decipher the flag, one must then divide the numbers received by the program by the answer to the math question.

### 4. Recreating the code

I created a script that deciphers a provided set of integers into a fake flag with the method described above.