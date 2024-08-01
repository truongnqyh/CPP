#include <iostream>
#include <vector>

using namespace std;

#define DOLLAR 100
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main() {
    int input{0};

    cout << "Enter number of cents: " << endl;
    cin >> input;

    cout << "You can provide this change as follows: " << endl;
    cout << "dollars: " << input / DOLLAR << endl; 
    input -= (input / DOLLAR) * DOLLAR;
    cout << "quarters: " << input / QUARTER << endl; 
    input -= (input / QUARTER) * QUARTER;
    cout << "dime: " << input / DIME << endl; 
    input -= (input / DIME) * DIME;
    cout << "nickel: " << input / NICKEL << endl; 
    input -= (input / NICKEL) * NICKEL;
    cout << "penny: " << input / PENNY << endl; 
    input -= (input / PENNY) * PENNY;

    return 0;
}
