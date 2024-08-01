#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    vector <int> inputVector;
    char input;
    int num{0};
    double avrg{0};
    int smallest{0};
    int largest{0};

    while(1){
        cout << "-----------------------------------------------" << endl;
        cout << "List of options below: " << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your option: " << endl;
        cin >> input;

        switch (input)
        {
            case 'P':
            case 'p':
                if (inputVector.empty()) {
                    cout << "[] - the list is empty" << endl;
                    } 
                else {
                    cout << "[ ";
                    for (auto option: inputVector){
                        cout << option << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            case 'A':
            case 'a':
                cout << "Enter number you want to add to the list: " << endl;
                cin >> num;
                inputVector.push_back(num);
                cout << num << " added" << endl;
                break;
            case 'M':
            case 'm':
                if (inputVector.empty()) {
                    cout << "Unable to calculate the mean - no data" << endl;
                    } 
                else {
                    cout << "Mean of average: ";
                    for (auto num: inputVector){
                        avrg += num;
                    }
                    cout << avrg / (inputVector.size()) << endl;
                }
                break;
            case 'S':
            case 's':
                if (inputVector.empty()) {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                    } 
                else {
                    smallest = inputVector.at(0);
                    cout << "Smallest num: ";
                    for (auto num: inputVector){
                        if(num < smallest){
                            smallest = num;
                        }
                    }
                    cout << smallest << endl;
                }
                break;
            case 'L':
            case 'l':
                if (inputVector.empty()) {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                    } 
                else {
                    largest = inputVector.at(0);
                    cout << "Largest num: ";
                    for (auto num: inputVector){
                        if(num > largest){
                            largest = num;
                        }
                    }
                    cout << largest << endl;
                }
                break;
            case 'Q':
            case 'q':
                cout << "Goodbye" << endl;
                exit(0);
                break;
            default:
            cout << "Unknown selection, please try again" << endl;
                break;
        }
    }

    
    return 0;
}
