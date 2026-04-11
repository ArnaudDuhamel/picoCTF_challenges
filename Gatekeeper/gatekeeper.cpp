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

    for (int i = flag.size() - 1; i >= 0; i--){

        cout << flag[i];

        if ((i % 4) == 0)
            cout << "ftc_oc_ip";

    }
    
    cout << endl;
     
}

string decodeFlage(string flag){

    

}

int main() {

    revealFlag();
    
    return 0;
}