#include <iostream>

using namespace std;

int main()
{
    int64_t secret = 3203613641;
    int64_t userInput = 0;

    cout << "What's the secret?: ";
    cin >> userInput;
    
    if (userInput != secret)
        puts("Nice try :(");
    else
        puts("Correct!");
    
    return 0;
}