#include <iostream>
#include "Trust_Account.h"

using namespace std;

Trust_Account::Trust_Account(string name , double balance, double int_rate)
    : Saving_Account{name, balance, int_rate} {
    num_withdrawals = 0;
}

bool Trust_Account::deposit(double amount){
    if(amount < bonus_threshold){
        return Saving_Account::deposit(amount);
    } else{
        if(Saving_Account::deposit(amount) == true){
            balance += bonus_amount;
            return true;
        }else{
            return false;
        }
    }
}

bool Trust_Account::withdraw(double amount){
    if((amount >= (withdrawal_limit_rate * balance)) || (num_withdrawals == max_withdrawal)){
        return false;
    } else {
        if(Saving_Account::withdraw(amount) == true){
            num_withdrawals += 1;
            return true;
        }
        else{
            return false;
        }
    }
}

void Trust_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account: " << name << ": " << balance << ", " << interest_rate << "%, withdrawals: " << num_withdrawals <<  "]";
}
