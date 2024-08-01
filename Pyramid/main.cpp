#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int i{0};
    int j{0};
    int sizestr{0};
    string input;
    string copy;
    cout << "Hello" << endl;
    cout << " Enter input string " << endl;
    cin >> input;
    sizestr = input.length();
    for(i = 0; i < sizestr; i++){
        for(j = 0; j < (sizestr - i); j++){
            cout << " ";
        }
        copy = input.substr(0, i);
        cout << copy << input.at(i);
        reverse(copy.begin(), copy.end());
        cout << copy;
        for(j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
 
    return 0;
}