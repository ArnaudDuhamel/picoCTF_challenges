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

    // Prints the flag in reverse and prints "ftc_oc_ip" at every
    // index being a factor of 4.
    for (int i = flag.length() - 1; i >= 0; i--){

        cout << flag[i];

        if ((i % 4) == 0)
            cout << "ftc_oc_ip";

    }
    
    cout << endl;
     
}

void decodeFlag(string flag){

    string from = "ftc_oc_ip";
    string to = "";

    // Goes through the flag string and removes ftc_oc_ip occurences. 
    size_t pos = 0;
    while ((pos = flag.find(from, pos)) != string::npos) {
        flag.replace(pos, from.length(), to);
        pos += to.length();  // move past replacement
    }

    reverse(flag.begin(),flag.end());

    cout << flag << endl;

}

int main() {

    revealFlag();

    decodeFlag("}gftc_oc_ipalf_ftc_oc_ipekafftc_oc_ip{FTCftc_oc_ipocipftc_oc_ip");
    
    return 0;
}