#include "Account.hpp"

static long int AccountIdCount = 0;

Account::Account() : _value(0){
    _id = AccountIdCount++;
}

Account::~Account(){
}


// Seters

void Account::setValue(int valueToSet){
    _value = valueToSet;
}

void Account::addValue(int valueToAdd){
    int bankTax = valueToAdd * 0.05;
    _value += (valueToAdd - bankTax);
}

void Account::subValue(int valueToSub){
    _value -= valueToSub;
}



// Getters

int Account::getValue(void) const{
    return (_value);
}

int Account::getId(void) const{
    return (_id);
}