#include <iostream>
#include "Saving_Account.h"

using namespace std;

ostream &operator<<(ostream &os, const Saving_Account &account){
    os << "[Account: " << account.name << ": ";
    os << account.balance << ", " << account.interest_rate << "]";
    return os;
}

Saving_Account::Saving_Account(string name, double balance, double interest_rate)
    : Account{name, balance}, interest_rate{interest_rate} {
}

bool Saving_Account::deposit(double amount){
    amount += amount * (interest_rate/100);
    return Account::deposit(amount);
}
