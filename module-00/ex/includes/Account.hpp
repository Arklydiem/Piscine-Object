#pragma once

#include "header.hpp"
#include "Bank.hpp"

struct Bank;

struct Account
{
    public:
        Account(unsigned int id);
        ~Account(void);

        void sendMoney(Bank bank, unsigned int accountId, unsigned int amount);
        void addMoney(unsigned int amount);
        unsigned int getAccountId(void) const;

    protected:

    private:
        unsigned int _id;
        int _money;
};
