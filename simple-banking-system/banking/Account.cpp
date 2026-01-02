#include "Account.h"
#include <iostream>

Account::Account(int accNum) {
    accountNumber = accNum;
    balance = 0.0;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposit successful.\n";
    } else {
        std::cout << "Invalid amount.\n";
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawal successful.\n";
    } else {
        std::cout << "Insufficient balance or invalid amount.\n";
    }
}

double Account::getBalance() const {
    return balance;
}


