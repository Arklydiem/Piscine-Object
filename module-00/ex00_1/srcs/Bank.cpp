#include "Bank.hpp"

//Bank Methods
Bank::Bank(){
	std::cout << "Bank created." << std::endl;
}

Bank::~Bank(){
	std::cout << "Bank deleted." << std::endl;
}


//Account Methods
Bank::Account::Account(unsigned int id): _accountId(id){
	std::cout << "Account created with id [" << id << "]." << std::endl;
}

Bank::Account::~Account(){
	std::cout << "Account with id [" << _accountId << "] deleted." << std::endl;
}

unsigned int Bank::Account::getAccountId(void) const {
	return (_accountId);
}


//Account Management Methods
void Bank::createAccount(void){
	static unsigned int accountCounter = 0;
	Bank::Account* newAccount = new Bank::Account(++accountCounter);
	_clientAccounts.push_back(newAccount);
}

void Bank::deleteAccount(unsigned int accountId){
	std::vector<Account *>::iterator iterator = _clientAccounts.begin();
	unsigned int nbAccount = _clientAccounts.size();
    for (unsigned int i = 0; i < nbAccount; i++){
		if ((*iterator)->getAccountId() == accountId){
			delete (*iterator);
			_clientAccounts.erase(iterator);
			return;
		}
		iterator++;
    }
}

void Bank::deleteAllAccounts(void){
	std::vector<Account *>::iterator iterator = _clientAccounts.begin();
    for (;iterator != _clientAccounts.end();){
        delete (*iterator);
        _clientAccounts.erase(iterator);
    }
}

Bank::Account* Bank::getAccountById(unsigned int accountId){
	std::vector<Account *>::iterator iterator = _clientAccounts.begin();
	unsigned int nbAccount = _clientAccounts.size();
    for (unsigned int i = 0; i < nbAccount; i++){
		if ((*iterator)->getAccountId() == accountId){
			return (*iterator);
		}
		iterator++;
    }
	std::cout << "Account with id [" << accountId << "] does not exist." << std::endl;
	return (NULL);
}

void Bank::Account::creditAccount(int amount){
	_money += amount;
	std::cout << "Account [" << _accountId << "] has been credited of {" << amount << "}." << std::endl;
}

void Bank::creditAccountById(unsigned int accountId, unsigned int moneyAmount){
	Bank::Account* account = getAccountById(accountId);
	if (!account)
		return;
	int bankTax = moneyAmount * 0.05;
	_liquidity += bankTax;
	account->creditAccount(moneyAmount - bankTax);
}

void Bank::Account::debitAccount(int amount){
	if (amount > _money){
		std::cout << "Account [" << _accountId << "] does not have enough money." << std::endl;
		return;
	}
	_money -= amount;
	std::cout << "Account [" << _accountId << "] has been debited of {" << amount << "}." << std::endl;
}

void Bank::debitAccountById(unsigned int accountId, unsigned int moneyAmount){
	Bank::Account* account = getAccountById(accountId);
	if (!account)
		return;
	account->debitAccount(moneyAmount);
}