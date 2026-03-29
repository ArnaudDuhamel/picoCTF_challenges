#include <iostream>

using namespace std;

void decodePassword(unsigned char codedPassword[]){
    
  for (int i = 0; i < 12; i++)
      codedPassword[i] ^= 170;
    
  return;
}

int main() {

    unsigned char codedPassword[] = {249, 223, 218, 207, 216, 249, 207, 201, 223, 216, 207, 170};

    // Decoded password is "SuperSecure"
    decodePassword(codedPassword);

    cout << "Decoded password: " << codedPassword << endl;

    return 0;
}