#include <iostream>
#include "Account.h"

int main() {
    int choice;
    int accNumber;
    double amount;
    Account* account = nullptr;

    do {
        std::cout << "\n===== Simple Banking System =====\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Check Balance\n";
        std::cout << "5. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                if (account == nullptr) {
                    std::cout << "Enter account number: ";
                    std::cin >> accNumber;
                    account = new Account(accNumber);
                    std::cout << "Account created successfully.\n";
                } else {
                    std::cout << "Account already exists.\n";
                }
                break;

            case 2:
                if (account != nullptr) {
                    std::cout << "Enter amount to deposit: ";
                    std::cin >> amount;
                    account->deposit(amount);
                } else {
                    std::cout << "Create an account first.\n";
                }
                break;

            case 3:
                if (account != nullptr) {
                    std::cout << "Enter amount to withdraw: ";
                    std::cin >> amount;
                    account->withdraw(amount);
                } else {
                    std::cout << "Create an account first.\n";
                }
                break;

            case 4:
                if (account != nullptr) {
                    std::cout << "Current balance: "
                              << account->getBalance() << " EUR\n";
                } else {
                    std::cout << "Create an account first.\n";
                }
                break;

            case 5:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    delete account;
    return 0;
}
