# Write-up Hidden Cipher 1

## Challenge

In this challenge, the flag is presented to the user, but is encrypted. The whole challenge is to decrypt the flag.

### 1. Running the challenge code and the provided binary

The challenge provides the binary file and a text file from which the binary reads a fake flag.

The first thing I did was to run the official challenge. I received the encrypted flag and that was it. Not much there.

I then ran the binaries that one could download. It read the fake flag from the file and output it encrypted. When I changed the fake flag in the file, the returned encrypted string changed as well.

I was not getting much here and I was quite clueless, so I read all the hints that were provided by the challenge.

### 2. First decompile

I decompiled the downloaded binary. But the result was not like I had seen it before. Notably, the function names were all uncommon names. It seemed like they were made up by the decompiler. Even the main function was not named "main".

So I ran the strings command on the binary file:

```
strings hiddencipher > strings.txt
```

And this line grabbed my attention:

```
$Info: This file is packed with the UPX executable packer http://upx.sf.net $
```

I remembered that one of the hints of the challenge mentioned that the binary could be "unpacked" with a tool often pre-installed on Linux.

So I started informing myself about upx.

### 3. Installing UPX

That's when I found out about packing binaries. Both to make the binary files smaller and to make its content less readable.

I tried to see if it was preinstalled on my Linux. So I ran `upx --version`. It returned a command to install upx. I ran it but it turned out to be the wrong product. The correct command to install upx from the command line is `sudo apt install upx-ucl`. However, the downloaded version is old.

So I went to the [repository](https://github.com/upx/upx/releases/tag/v5.1.1) to download the latest version. I ran `uname -m`, my system is x86_64. So I downloaded the amd64_linux file. Exactly "upx-5.1.1-amd64_linux.tar.xz". After download, I ran the `tar -xf upx-5.1.1-amd64_linux.tar.xz` command to uncompress the release. I then went inside the extracted folder to test upx with the command `./upx --version` and it worked. Lastly, still in the extracted folder, I ran the command `sudo cp upx /usr/local/bin/` to make upx available over the whole computer by just typing "upx" in the command line. I tested with `upx --version` and it worked. I then deleted the tar file and the extracted folder.

Installing upx was a bit of a rabbit hole. But it worked and was worth it. I feel like a big barrier to the challenges is having an environment to work from and getting a hold of the necessary tools. It definitely requires an investment.

I then tested to see if the binary was pcked with upx with the command `upx -t hiddencipher`. And it was. 

So I unpacked the binary file with the command `upx -d hiddencipher`.

All of that done based almost only with the help of ChatGPT.

### 4. Second decompilation

I then proceeded to decompile the unpacked binary.

I inserted the binary file in a decmompiler. I used [Decompiler Express](https://dogbolt.org/).

I worked with two decompilers: Ghydra & Binary Ninja. The output of each decompiler is included in the folder.

At that point the decompiler output looked like what I was used to, with function names.

### 5. Figuring out the cipher and they

The challenge mentions that the only thing we have to do is figure out the cipher and the key. At first, I tried extracting the string value of the flag. Because the code first reads the unencrypted flag from the file, and then encrypts it before outputting it to the user. But it turns out this was not a viable option, because the real flag was only available in the closed environment of the challenge.

So I had not other choice but to actually figure out the cipher and the key.

For the cipher, the relevant piece of code is this one:

```
while (count > var_2c_1)
    {
        printf("%02x", *(&s.0 + var_2c_1 % 6) ^ *(buf + var_2c_1), "%02x");
        var_2c_1 += 1;
    }
```

But reading multiple times the decompiled code, I could understand that `*(buf + var_2c_1)` are each character of the flag string. `*(&s.0 + var_2c_1 % 6)` is each value of the key.

So the loop traverses only one time the flag string. And the key loops continuously from 0 to 5 through the whole flag string. That is achieved with `% 6`.

And it turns out this is a XOR operation based on the `^` operator.

### 6. Recreating the code

I recreated the encryption/decryption part of the code.