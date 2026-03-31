#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

vector<unsigned char> decodeFlag(vector<unsigned char> codedPassword){
    
    vector<int> key = {83, 51, 67, 114, 51, 116};

    int codedPasswordLength = codedPassword.size();
    int keyLength = key.size();

    // The modulo symbol in the key index makes the final index loop between 0 and 5
    // even though i goes higher then 5.
    for (int i = 0; i < codedPasswordLength; i++)
        codedPassword[i] ^= key[i % keyLength];
    
    return codedPassword;
}

int main() {

    vector<unsigned char> decodedFlag = {'p','i','c','o','C','T','F','{','f','a','k','e','_','f','l','a','g','}'};

    vector<unsigned char> codedFlag = decodeFlag(decodedFlag);

    cout << "Coded flag: ";

    for (unsigned char i: codedFlag)
        cout
            << hex                // print in hexadecimal
            << setw(2)            // width of 2 characters
            << std::setfill('0')  // pad with '0' if needed
            << (int)i;          

    cout << endl;

    decodedFlag = decodeFlag(codedFlag);

    cout << "Decoded flag: ";

    for (unsigned char i: decodedFlag)
        cout  << i;
                 
    cout << endl;
    
    return 0;
}