#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

vector<unsigned char> decodeFlag(vector<unsigned int> codedFlag, int key){
    
    int codedFlagLength = codedFlag.size();
    vector<unsigned char> decodedFlag;

    for (int i = 0; i < codedFlagLength; i++)
        codedFlag[i] /= key;

    for (int flag_char : codedFlag) {
        decodedFlag.push_back(static_cast<unsigned char>(flag_char));
    }
    
    return decodedFlag;
}

int main() {

    // Example of a math problem: What is 1 + 2? 3.
    // One then decrypts the flag by dividing every provided int by 3.
    vector<unsigned int> codedFlag = {336, 315, 297, 333, 201, 252, 210, 369, 306, 291, 321, 303, 285, 306, 324, 291, 309, 375};
    
    vector<unsigned char> decodedFlag = decodeFlag(codedFlag,3);
    
    cout << "Decoded flag: ";

    for (unsigned char i: decodedFlag)
        cout  << i;
                 
    cout << endl;
    
    return 0;
}