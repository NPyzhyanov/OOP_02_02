#include "change_balance.h"

#include "bank_account.h"

void change_balance(Bank_Account* p_user_account, int new_balance)
{
    p_user_account->balance = new_balance;
}
