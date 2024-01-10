#pragma once

#include "header.hpp"
#include "Account.hpp"

struct Bank
{
    public:
        Bank(void);
        ~Bank(void);

        void createAccount(void);
        void deleteAccount(unsigned int accountId);
    protected:
    private:
        int _liquidity;
        unsigned int _accountCounter;
        std::vector<Account *> _clientAccounts;
};
