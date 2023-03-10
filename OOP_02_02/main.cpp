#include <iostream>

#include "bank_account.h"
#include "change_balance.h"

int main()
{
    Bank_Account user_account;
    
    std::cout << "Enter account number: ";
    std::cin >> user_account.ID;
    
    std::cout << "Enter holder's name: ";
    std::cin >> user_account.name;
    
    std::cout << "Enter account balance: ";
    std::cin >> user_account.balance;
    
    std::cout << "Enter new balance: ";
    int new_balance;
    std::cin >> new_balance;
    
    change_balance(&user_account, new_balance);
    
    std::cout << "Your account: " << user_account.name << ", " << user_account.ID << ", " << user_account.balance << std::endl;
    
    return 0;
}
