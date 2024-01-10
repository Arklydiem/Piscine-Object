#include "Bank.hpp"

Bank::Bank(): _liquidity(0){
}

Bank::~Bank(){
}

// Accounts

std::vector<Account *> Bank::getAccounts(void){
    return (_clientAccounts);
}

void Bank::createAccount(){
    Account* newAccount = new Account();
    _clientAccounts.push_back(newAccount);

    std::cout << "New Account created, id = " << newAccount->getId() << std::endl;
}

void Bank::addAccount(Account* account){
    _clientAccounts.push_back(account);
}

void Bank::deleteAccount(int accountId){
    std::vector<Account *>::iterator iterator = _clientAccounts.begin();
    for (unsigned long i = 0; i < _clientAccounts.size(); i++)
    {
        if ((*iterator)->getId() == accountId)
        {
            _clientAccounts.erase(iterator);
            delete((*iterator));
        }
        iterator++;
    }
}

int Bank::getLiquidity(void) const{
    return (_liquidity);
}

void Bank::setLiquidity(int value){
    _liquidity = value;
}

void Bank::addLiquidity(int value){
    _liquidity += value;
}

void Bank::subLiquidity(int value){
    _liquidity -= value;
}

