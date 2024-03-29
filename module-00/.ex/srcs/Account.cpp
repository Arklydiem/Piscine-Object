#include "Account.hpp"

Account::Account(unsigned int id){
    _id = id;
    _money = 0;
}

Account::~Account(){

}

void Account::sendMoney(Bank bank, unsigned int accountId, unsigned int amount){
    if ((int)amount > _money){
        std::cout << "You don't have enough money" << std::endl;
        return ;
    }
    bank.creditAccount(accountId, amount);
}

unsigned int Account::getAccountId(void) const{
    return (_id);
}

void Account::addMoney(unsigned int amount){
    _money += amount;
}
