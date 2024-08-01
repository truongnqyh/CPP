#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Elements in vector1: " << endl;
    for ( auto index:vector1){
        cout << index << " ";
    }
    cout << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Elements in vector2: " << endl;
    for ( auto index:vector2){
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}
