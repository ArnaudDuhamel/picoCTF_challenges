# Write-up Silent Stream

## Challenge

In this challenge, we need to decrypt the content of a file that has been captured by Wireshark will it was being sent to another computer. The crypted content contains the flag.

### 1. How was the file encrypted?

The challenge provides a python script showing how the file was encrypted.

It used a cesar cypher, with a % 256 operation to always keep each byte of data within the range of a character.

To reverse the encryption, one must then subtract the cypher from the encrypted byte, also with a % 256 modulo operation to not let the numbers in the bytes go under 0.

Like this:

```cpp
for (int i = 0; i < codedBytesLength; i++)
    codedBytes[i] = (codedBytes[i] - key) % 256;
```

In the script provided by the challenge, the default key number for the encryption is 42, and in main, the function is called without a key value, indicating that the key that was used in the challenge was 42.

### 2. Extracted the captured file content

I had to install Wireshark to be able to read the PCAP file.

I then loaded the file in Wireshark:

<img src="images/wireshark_1.png" width="900" height="400">

The file content is in the data layer of the each packet:

<img src="images/wireshark_2.png" width="900" height="300">

Going in each packet to extract the content can be fastidious. An easier way is to right click on a packet and select "Follow" and then click on "TCP Stream":

<img src="images/wireshark_3.png" width="900" height="400">

The content of the whole sequence will be displayed:

<img src="images/wireshark_4.png" width="800" height="600">

These are the hex values of each byte, without spaces. And at this point, the bytes are encrypted.



### 3. Recreating the code

