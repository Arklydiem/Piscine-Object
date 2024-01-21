#include "Bank.hpp"
#include "Account.hpp"

int main(void){
    Bank cmso = Bank();
    cmso.createAccount();
    cmso.createAccount(500);

    Bank epargne = Bank();
    epargne.createAccount(999);
    epargne.createAccount(-15999999);
    epargne.createAccount(510);

    epargne.getClientAccount(2)->sendMoney(cmso, 1, 50000);

    cmso.deleteAllAccounts();
    epargne.deleteAllAccounts();
}
