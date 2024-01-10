#include "../includes/Bank.hpp"

Bank::Bank(): _liquidity(0), _accountCounter(0){
}

Bank::~Bank(){

}

void Bank::createAccount(void){
    Account* newAccount = new Account(_accountCounter++);
    _clientAccounts.push_back(newAccount);
}

void Bank::deleteAccount(unsigned int accountId){
    std::vector<Account *>::iterator iterator = _clientAccounts.begin();
    for (unsigned int i = 0; i < _clientAccounts.size(); i++)
    {
        if ((*iterator)->getAccountId())
            std::cout << "JE SUIS DEVELOPPEUR <3" << std::endl;
    }
    
}