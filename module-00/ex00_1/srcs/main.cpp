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

    bnp.creditAccountById(2, 500);
    bnp.creditAccountById(18, 500);

    bnp.debitAccountById(2, 50);
    bnp.debitAccountById(3, 500);

    bnp.deleteAccount(5);
    bnp.deleteAllAccounts();
    return (0);
}