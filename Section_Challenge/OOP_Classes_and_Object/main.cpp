#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

void print_arr(int *arr, int size);
int *create_array(int &size);
int *apply_all(int *arr1, int *arr2, int size1, int size2);

int main() {
    int size1{0};
    int size2{0};

    int *arr1 = create_array(size1);
    int *arr2 = create_array(size2);
    print_arr(arr1, size1);
    print_arr(arr2, size2);
    int *new_arr = apply_all(arr1, arr2, size1, size2);
    print_arr(new_arr, (size1 * size2));

    delete new_arr;
    delete arr1;
    delete arr2;
    
    return 0;
}

void print_arr(int *arr, int size){
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int *create_array(int &size){
    size_t local_size;

    cout << "Enter size of array: " << endl;
    cin >> local_size;
    size = local_size;
    int *new_arr = new int[local_size];
    for(int i = 0; i < size; i++){
        cout << "Enter element " << i << " in array" << endl;
        cin >> *(new_arr + i);
    }

    return new_arr;
}

int *apply_all(int *arr1, int *arr2, int size1, int size2){
    int *new_arr = new int[size1 * size2];
    int num{0};

    for(int i = 0; i < size2; i++){
        for(int j = 0; j < size1; j++){
            new_arr[num] = arr2[i] * arr1[j];
            num++;
        }
    }

    return new_arr;
}