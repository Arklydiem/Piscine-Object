#pragma once

#include "header.hpp"

class Account
{
	private:
		int	_id;
		int	_value;
	
	public:
		Account();
		~Account();

		void	setValue(int valueToSet);
		void	addValue(int valudeToAdd);
		void	subValue(int valudeToSub);

		int		getValue(void) const;
		int		getId(void) const;

	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
	{
		p_os << "[" << p_account._id << "] - [" << p_account._value << "]";
		return (p_os);
	}
};