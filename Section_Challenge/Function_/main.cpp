#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

void display_menu(void);
char read_selection();
void print_number(vector <int> list);
void add_number(vector <int> &list);
void calculate_mean(vector <int> list);
void display_smallest(vector <int> list);
void display_largest(vector <int> list);

int main() {
    vector <int> inputVector;

    while(1){
        display_menu();

        switch (read_selection())
        {
            case 'P':
                print_number(inputVector);
                break;
            case 'A':
                add_number(inputVector);
                break;
            case 'M':
                calculate_mean(inputVector);
                break;
            case 'S':
                display_smallest(inputVector);
                break;
            case 'L':
                display_largest(inputVector);
                break;
            case 'Q':
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


void display_menu(void){
    cout << "-----------------------------------------------" << endl;
    cout << "List of options below: " << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

char read_selection(){
    char input;

    cout << "Enter your option: " << endl;
    cin >> input;

    return toupper(input);
}
void print_number(vector <int> list){
    if (list.empty()) {
        cout << "[] - the list is empty" << endl;
        } 
    else {
        cout << "[ ";
        for (auto option: list){
            cout << option << " ";
        }
        cout << "]" << endl;
    }
}

void add_number(vector <int> &list){
    int num;

    cout << "Enter number you want to add to the list: " << endl;
    cin >> num;
    list.push_back(num);
    cout << num << " added" << endl;
}


void calculate_mean(vector <int> list){
    double avrg{0};

    if (list.empty()) {
        cout << "Unable to calculate the mean - no data" << endl;
        } 
    else {
        cout << "Mean of average: ";
        for (auto num: list){
            avrg += num;
        }
        cout << avrg / (list.size()) << endl;
    }
}

void display_smallest(vector <int> list){
    int smallest{0};

    if (list.empty()) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
        } 
    else {
        smallest = list.at(0);
        cout << "Smallest num: ";
        for (auto num: list){
            if(num < smallest){
                smallest = num;
            }
        }
        cout << smallest << endl;
    }
}

void display_largest(vector <int> list){
    int largest{0};

    if (list.empty()) {
        cout << "Unable to determine the largest number - list is empty" << endl;
        } 
    else {
        largest = list.at(0);
        cout << "Smallest num: ";
        for (auto num: list){
            if(num > largest){
                largest = num;
            }
        }
        cout << largest << endl;
    }
}