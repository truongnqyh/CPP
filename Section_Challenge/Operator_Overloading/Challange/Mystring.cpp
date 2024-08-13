#include <iostream>
#include <cstring>
#include <cctype>
#include "Mystring.h"
#include <algorithm>
#include <string>

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

/****************************** OPERATOR OVERLOADING ****************************/
// Copy assignment operator
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move assignment operator
Mystring &Mystring::operator=( Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

bool operator<(const Mystring &lhs, const Mystring &rhs){
    if(strcmp(lhs.str, rhs.str) < 0) {return true;}
    return false;
}

bool operator>(const Mystring &lhs, const Mystring &rhs){
    if(strcmp(lhs.str, rhs.str) > 0) {return true;}
    return false;
}

Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;

    return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str) + 1 + std::strlen(rhs.str + 1) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;

    return temp;
}

Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
    lhs = lhs + rhs;

    return lhs;
}

Mystring operator*(const Mystring &lhs, int repeatTime){
    Mystring temp;
    for(int i = 0; i < repeatTime; i++){
        temp += lhs;
    }

    return temp;
}

Mystring &operator*=(Mystring &lhs, int repeatTime){
    lhs = lhs * repeatTime;

    return lhs;
}

// Extraction
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str; // If friend function
    // os << rhs.get_str // If not friend function
    return os;
}

// Insertion
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *input = new char[1000];
    in >> input;
    rhs = Mystring{input};
    delete [] input;
    return in;
}

bool operator==(const Mystring &lhs, const Mystring &rhs){
    if (strcmp(lhs.str, rhs.str) == 0) {return true;}
    return false;
}

bool operator!=(const Mystring &lhs, const Mystring &rhs){
    if (strcmp(lhs.str, rhs.str) != 0) {return true;}
    return false;
}

Mystring &operator++(Mystring &obj){
    for (size_t i=0; i< std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

Mystring operator++(Mystring &obj, int){
    Mystring temp {obj};
    ++obj;      // make sure you call the pre-increment!
    return temp;
}

/****************************** OPERATOR OVERLOADING ****************************/
// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }
 
 // string getter
const char *Mystring::get_str() const { return str; }


 