#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_

using namespace std;
#include <iostream>
#include "Account.h"

class Saving_Account: public Account {
    friend ostream &operator<<(ostream &os, const Saving_Account &account);
private:    
    static constexpr const char *def_name = "Unnamed Saving Account";
    static constexpr double def_balance = 0.0;
protected:
    double interest_rate;
public:
    Saving_Account(string name = def_name, double balance = def_balance, double interest_rate = 0);
    bool deposit(double amount);
};

#endif
