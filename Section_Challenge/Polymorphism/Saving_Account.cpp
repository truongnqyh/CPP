#include <iostream>
#include "Saving_Account.h"

using namespace std;

Saving_Account::Saving_Account(string name, double balance, double interest_rate)
    : Account{name, balance}, interest_rate{interest_rate} {
}

bool Saving_Account::deposit(double amount){
    amount += amount * (interest_rate/100);
    return Account::deposit(amount);
}

bool Saving_Account::withdraw(double amount){
    return Account::withdraw(amount);
}

void Saving_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Savings_Account: " << name << ": " << balance << ", " << interest_rate << "]";
}
