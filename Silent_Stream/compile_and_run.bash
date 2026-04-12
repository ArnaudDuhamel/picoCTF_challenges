#!/bin/bash

g++ decrypt.cpp flagBytes.cpp -o decrypt.out
./decrypt.out

xxd -r -p decryptedBytes.txt flag.jpg

xdg-open flag.jpg