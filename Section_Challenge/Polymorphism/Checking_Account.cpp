#include <iostream>
#include "Checking_Account.h"

using namespace std;

Checking_Account::Checking_Account(string name, double balance)
    : Account{name, balance} {
}

bool Checking_Account::withdraw(double amount){
    amount += 1.5;
    return Account::withdraw(amount);
}


bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}


void Checking_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Checking Account: " << name << ": " << balance  << "]"; 
}