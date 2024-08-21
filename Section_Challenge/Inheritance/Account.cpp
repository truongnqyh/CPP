#include <iostream>
#include "Account.h"

using namespace std;
#include "Account.h"

Account::Account(string name, double balance) 
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount < 0){
        return false;
    }
    else{
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else{
        return false;
    }
}

ostream &operator<<(ostream &os, const Account &account) {
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}