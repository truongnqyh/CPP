/* 1. Add a Checking account class to the Account hierarchy
    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
    Every withdrawal transaction will be assessed this flat fee.
*/
#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

using namespace std;
#include <iostream>
#include "Account.h"

class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double flat_fee = 1.5;
public:
    Checking_Account(string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(ostream &os) const override;
    virtual ~Checking_Account() = default;
};

#endif
