/*  Add a Trust account class to the Account hierarchy
    A Trust account has a name, a balance, and an interest rate
    The Trust account deposit works just like a savings account deposit.
    However, any deposits of $5000.00 or more will receive a $50.00 bonus
    deposited to the account.
    
    The Trust account withdrawal should only allow 3 withdrawals 
    per year and each of these must be less than 20% of the account balance.
    You don't have to keep track of calendar time for this application, 
    just make sure the 4th withdrawal fails :)
*/
#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

using namespace std;
#include <iostream>
#include "Saving_Account.h"

class Trust_Account: public Saving_Account {
    friend ostream &operator<<(ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trusted Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr int max_withdrawal = 3;
    static constexpr double withdrawal_limit_rate = 0.2;
protected:
    int num_withdrawals;
public:
    Trust_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif
