#pragma once

#include <iostream>
#include <vector>

struct Bank
{
    private:
        struct Account
        {
            public:
                Account(unsigned int id);
                ~Account();

                unsigned int getAccountId(void) const;
            private:
                unsigned int _accountId;
                int _money;
        };
        int _liquidity;
        std::vector<Account *> _clientAccounts;
        
    public:
        Bank();
        ~Bank();

        void createAccount(void);
        void deleteAccount(unsigned int id);
        void deleteAllAccounts(void);
        Account* getAccountById(unsigned int accountId);
        void creditAccount(unsigned int accountId, unsigned int moneyAmount) const;
        // void debitAccount(unsigned int accountId, unsigned int moneyAmount) const;
};
