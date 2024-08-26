#include <iostream>
#include "Account_Util.h"

using namespace std;

// Displays Account objects in a  vector of Account object pointers
void display(const std::vector<Account *> &accounts) {
    cout << "\n=== Accounts===========================================" << std::endl;
    for (const auto acc: accounts) 
        cout << *acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account *> &accounts, double amount) {
    cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto acc:accounts)  {
        if (acc->deposit(amount)) 
            cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account *> &accounts, double amount) {
    cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto acc:accounts)  {
        if (acc->withdraw(amount)) 
            cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    } 
}