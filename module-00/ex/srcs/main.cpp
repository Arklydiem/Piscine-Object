#include "Account.hpp"
#include "Bank.hpp"

// int main()
// {
// 	Account accountA = Account();
// 	accountA.setValue(100);

// 	Account accountB = Account();
// 	accountB.setValue(100);

	
// 	// bank.liquidity = 999;
// 	// bank.clientAccounts.push_back(&accountA);
// 	// bank.clientAccounts.push_back(&accountB);

// 	// bank.liquidity -= 200;
// 	accountA.addValue(1000);

// 	std::cout << "Accounts : " << std::endl;
// 	std::cout << "A : " << accountA << std::endl;
// 	std::cout << "B : " << accountB << std::endl;
// 	std::cout << " ----- " << std::endl;

// 	std::cout << "Bank : " << std::endl;
// 	// std::cout << bank << std::endl;

// 	Bank bank = Bank();
// 	bank.createAccount();
// 	bank.deleteAccount(2);

// 	return (0);
// }

int main()
{
	Account accountA = Account();
	accountA.setValue(100);

	Account accountB = Account();
	accountB.setValue(100);

	Bank bank = Bank();
	bank.setLiquidity(999);
	bank.getAccounts().push_back(&accountA);
	bank.getAccounts().push_back(&accountB);

	bank.subLiquidity(200);
	accountA.addValue(400);

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}