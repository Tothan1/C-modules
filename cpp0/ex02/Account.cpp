#include "Account.hpp"
#include <iostream>
#include <ctime>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

// Other méthode
void	Account::_displayTimestamp( void )
{
	time_t ctime = std::time(NULL);
	struct tm ntime = *std::localtime(&ctime);

	std::cout << '[' ;
	std::cout << ntime.tm_year + 1900;
	displayTimeFormat(ntime.tm_mon + 1, 2);
	displayTimeFormat(ntime.tm_mday, 2);
	std::cout << "_" ;
	displayTimeFormat(ntime.tm_hour, 2);
	displayTimeFormat(ntime.tm_min, 2);
	displayTimeFormat(ntime.tm_sec, 2);
	std::cout << ']';
	// auto now = std::chrono::system_clock::now();
	// std::cout << std::ctime(&currentTime);
	// std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
}

void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if(_amount - withdrawal > 0)
	{
		_amount -= withdrawal;
		std::cout <<  withdrawal;
		std::cout << ";amount:" << _amount;
		_nbWithdrawals++;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
	else
	{
		std::cout << "refused";
		std::cout << std::endl;
		return false;
	}
}
int	Account::checkAmount( void ) const
{
	return _amount;
}

// Principale méthode
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

// Constructor
Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created";
	std::cout << std::endl;
	// _accountIndex++;
}

// Destructor
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed";
	std::cout << std::endl;
}