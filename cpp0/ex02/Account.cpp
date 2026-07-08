# include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
// Constructor

Account::Account( int initial_deposit )
{

}

// GET
static int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
static int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
static int	Account::getNbDeposits( void )
{
	return _nbDeposits;
}
static int	Account::getNbWithdrawals( void )
{
	return _nbWithdrawals;
}

// Other méthode
static void	Account::_displayTimestamp( void )
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
static void	Account::displayAccountsInfos( void )
{
	for (int i = 0; i < _nbAccounts; i++)
	{
		std::cout << '[' << _displayTimestamp << ']';
		std::cout << "index:" << _accountIndex;
		std::cout << "p_amount:" << _displayTimestamp;
		std::cout << "index:" << _displayTimestamp;
		std::cout << "index:" << _displayTimestamp;
		std::cout << "index:" << _displayTimestamp;
		std::cout << "index:" << _displayTimestamp;

		p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1;
		std::cout << std::endl;

	}
	
}

void	Account::displayStatus( void ) const
{

}

// Destructor
Account::~Account( void )
{
	
}