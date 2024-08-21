#include <iostream>
#include "Checking_Account.h"

using namespace std;

ostream &operator<<(ostream &os, const Checking_Account &account){
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}

Checking_Account::Checking_Account(string name, double balance)
    : Account{name, balance} {
}

bool Checking_Account::withdraw(double amount){
    amount += 1.5;
    return Account::withdraw(amount);
}
