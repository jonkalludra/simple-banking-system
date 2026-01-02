#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNum);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
};

#endif
