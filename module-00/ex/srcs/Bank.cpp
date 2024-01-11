#include "Bank.hpp"

Bank::Bank(): _liquidity(0), _accountCounter(0){
}

Bank::~Bank(){

}

void Bank::createAccount(void){
    Account* newAccount = new Account(++_accountCounter);
    _clientAccounts.push_back(newAccount);
    std::cout << "Account created" << std::endl;
    std::cout << "\tID : " << newAccount->getAccountId() << std::endl;
}

void Bank::createAccount(int amount){
    Account* newAccount = new Account(++_accountCounter);
    _clientAccounts.push_back(newAccount);
    newAccount->addMoney(amount);
    std::cout << "Account created" << std::endl;
    std::cout << "\tID : " << newAccount->getAccountId() << std::endl;
    std::cout << "\tMoney : " << amount << std::endl;
}

void Bank::deleteAccount(unsigned int accountId){
    std::vector<Account *>::iterator iterator = _clientAccounts.begin();
    for (unsigned int i = 0; i < _clientAccounts.size(); i++){
        if ((*iterator)->getAccountId() == accountId){
            std::cout << "Account deleted" << std::endl;
            std::cout << "\tID : " << (*iterator)->getAccountId() << std::endl;
            delete (*iterator);
            _clientAccounts.erase(iterator);
        }
        iterator++;
    }
}

Account* Bank::getClientAccount(unsigned int accountId){
    std::vector<Account *>::iterator iterator = _clientAccounts.begin();
    for (unsigned int i = 0; i < _clientAccounts.size(); i++){
        if ((*iterator)->getAccountId() == accountId){
            return ((*iterator));
        }
        iterator++;
    }
    std::cout << "Account does not exists in this Bank" << std::endl;
    return NULL;
}

void Bank::creditAccount(unsigned int accountId, unsigned int amountToCredit){
    Account* accounToCredit = this->getClientAccount(accountId);
    if (!accounToCredit)
        return ;
    unsigned int bankTax = amountToCredit * 0.05;
    _liquidity += bankTax;
}

void Bank::deleteAllAccounts(void){
    std::cout << "Delete All accounts :" << std::endl;
    std::vector<Account *>::iterator iterator = _clientAccounts.begin();
    for (;iterator != _clientAccounts.end();){
        std::cout << "\tAccount with ID : " << (*iterator)->getAccountId() << " deleted" << std::endl;
        delete (*iterator);
        _clientAccounts.erase(iterator);
    }
}
