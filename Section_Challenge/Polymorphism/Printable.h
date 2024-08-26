#ifndef _PRINTABLE_H_
#define _PRINTABLE_H_

using namespace std;
#include <iostream>
#include <string>

class Printable {
    friend ostream &operator<<(ostream &os, const Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~Printable() = default;
};

#endif
