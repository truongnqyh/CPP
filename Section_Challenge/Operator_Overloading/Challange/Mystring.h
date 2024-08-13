#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class Mystring{
    friend bool operator<(const Mystring &lhs, const Mystring &rhs) ;
    friend bool operator>(const Mystring &lhs, const Mystring &rhs) ;
    friend Mystring operator-(const Mystring &obj) ;
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs) ;
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int repeatTime);
    friend Mystring &operator*=(Mystring &lhs, int repeatTime);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);           // equals
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs) ;
    friend Mystring &operator++(Mystring &obj);                                           // ++s1; pre-increment make uppercase
    friend Mystring operator++(Mystring &obj, int);   
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
