#pragma once

#include "header.hpp"
#include "Account.hpp"

struct Account;


struct Bank
{
    public:
        Bank(void);
        ~Bank(void);

        void createAccount(void);
        void createAccount(int amount);
        void deleteAccount(unsigned int accountId);
        Account* getClientAccount(unsigned int accountId);
        void creditAccount(unsigned int accountId, unsigned int amountToCredit);
        void deleteAllAccounts();

    protected:

    private:
        int _liquidity;
        unsigned int _accountCounter;
        std::vector<Account *> _clientAccounts;
};