#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string secret_message{};
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    cout << "Enter secret message: " << endl;
    getline(cin, secret_message);
    
    string encrypted_message{};
    cout << "Encrypting message..." << endl;
    for(char c:secret_message){
        size_t position = alphabet.find(c);
        if(position != string::npos){
            encrypted_message += key.at(position);
        }
        else{
            encrypted_message += c;
        }
    }
    cout << "Encrypted message: " << encrypted_message << endl;

    string decrypted_message{};
    cout << "Decrypting message..." << endl;
        for(char c:encrypted_message){
        size_t position = key.find(c);
        if(position != string::npos){
            decrypted_message += alphabet.at(position);
        }
        else{
            decrypted_message += c;
        }
    }
    cout << "Decrypted message: " << decrypted_message << endl;

    return 0;
}
