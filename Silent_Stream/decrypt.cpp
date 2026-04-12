#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include "flagBytes.h"

using namespace std;

vector<unsigned char> decodeBytes(vector<unsigned char> codedBytes, int key){
    
    int codedBytesLength = codedBytes.size();
    vector<unsigned char> decodedBytes;

    for (int i = 0; i < codedBytesLength; i++)
        codedBytes[i] = (codedBytes[i] - key) % 256;

    for (int coded_char : codedBytes) {
        decodedBytes.push_back(static_cast<unsigned char>(coded_char));
    }
    
    return decodedBytes;
}

int main() {

ofstream file("decryptedBytes.txt");

vector<unsigned char> decodedBytes = decodeBytes(flagBytes,42);
    
for (unsigned char i: decodedBytes)
    file  << hex << setw(2) << setfill('0') << (int)i; 

return 0;

}