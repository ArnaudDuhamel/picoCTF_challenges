#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void revealFlag(){
    
    ifstream flagFile("flag.txt");

    if (!flagFile.is_open()){
        cout << "Flage file not found." << endl;
    }

    string flag; 
    
    getline(flagFile,flag);

    reverse(flag.begin(),flag.end());

    cout << flag << endl;
    
}

int main() {

    revealFlag();
    
    return 0;
}