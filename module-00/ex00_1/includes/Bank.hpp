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
                void    creditAccount(int amount);
                void    debitAccount(int amount);

            private:
                unsigned int _accountId;
                int _money;
        };
        int _liquidity;
        std::vector<Account *> _clientAccounts;
        Account* getAccountById(unsigned int accountId);
        
    public:
        Bank();
        ~Bank();

        void createAccount(void);
        void deleteAccount(unsigned int id);
        void deleteAllAccounts(void);
        void creditAccountById(unsigned int accountId, unsigned int moneyAmount);
        void debitAccountById(unsigned int accountId, unsigned int moneyAmount);
};
