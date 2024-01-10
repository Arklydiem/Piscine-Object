#pragma once

#include "header.hpp"
#include "Account.hpp"

class Bank 
{
	private :
		int						_liquidity;
		std::vector<Account *>	_clientAccounts;

	public:
		Bank();
		~Bank();

		// Account Management
		std::vector<Account *> getAccounts(void);
		const Account*	getAccountById(int id);
		void createAccount(void);
		void addAccount(Account *account);
		void deleteAccount(int accountId);

		// Account Money Management
		void addMoney(int value);
		void subMoney(int value);

		// Liquidity
		int	getLiquidity(void) const;
		void setLiquidity(int value);
		void addLiquidity(int value);
		void subLiquidity(int value);

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
	{
		p_os << "Bank informations : " << std::endl;
		p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;
		for (unsigned int i = 0; i < p_bank._clientAccounts.size(); i++)
		{
        	p_os << p_bank._clientAccounts[i] << std::endl;
		}
		return (p_os);
	}
};
