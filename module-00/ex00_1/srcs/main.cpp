#include "Bank.hpp"

int main(void){
    Bank bnp = Bank();
    bnp.createAccount();
    bnp.createAccount();
    bnp.createAccount();
    bnp.createAccount();
    bnp.createAccount();
    bnp.createAccount();

    // Bank cic = Bank();
    // cic.createAccount();

    bnp.deleteAccount(5);
    bnp.deleteAllAccounts();
    return (0);
}