# include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>


// GET
int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _nbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _nbWithdrawals;
}

// Other méthode
void	Account::_displayTimestamp( void )
{
	auto now = std::chrono::system_clock::now();
	std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
	std::cout << std::ctime(&currentTime);
}

void	Account::makeDeposit( int deposit )
{

}
bool	Account::makeWithdrawal( int withdrawal )
{

}
int	Account::checkAmount( void ) const
{

}

// Principale méthode
void	Account::displayStatus( void ) const
{
		std::cout << '[' << _displayTimestamp << ']';
		std::cout << "index:" << _accountIndex;
		std::cout << "amount:" << _amount;
		std::cout << ';';
}

static void	Account::displayAccountsInfos( void )
{
	for (int i = 0; i < _nbAccounts; i++)
	{
		std::cout << "deposits:" << _nbDeposits;
		std::cout << "withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
	}
}

// Constructor

Account::Account( int initial_deposit )
{
	for (int i = 0; i < _nbAccounts; i++)
	{
		Account::displayStatus();
		std::cout << "created";
		std::cout << std::endl;
	}
}

// Destructor
Account::~Account( void )
{
	for (int i = 0; i < _nbAccounts; i++)
	{
		Account::displayStatus();
		std::cout << "closed";
		std::cout << std::endl;
	}
}