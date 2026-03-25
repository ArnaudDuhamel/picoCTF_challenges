#include <iostream>

using namespace std;

uint64_t myHash(unsigned char* input){

  uint64_t hash = 5381;
  
  for (int i = 0; *(input + i) != 0; i++)
    hash = *(input + i) + hash * 33;
    
  return hash;

}

uint64_t makeSecret(unsigned char* input){
    
  unsigned char unobfuscatedInput[12];

  for (int i = 0; i < 12; i++)
      *(unobfuscatedInput + i) = *(input + i) ^ 170;

  unobfuscatedInput[12] = 0;
    
  return myHash(unobfuscatedInput);
}

int main() {

    unsigned char inputObf[] = {195, 255, 200, 194, 146, 155, 139, 192, 128, 194, 196, 139};

    unsigned char inputNotObf[] = {105, 85, 98, 104, 56, 49, 33, 106, 42, 104, 110, 33, 0};
    
    cout << "Hash after unobfuscating input in makeSecret function: " <<  makeSecret(inputObf) << endl;

    cout << "Direct hash function with unobfuscated input: " << myHash(inputNotObf) << endl;

    return 0;
}