#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{

    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer[80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    std::strftime(buffer, 80, "%Y%m%d_%H%M%S", timeinfo);
	std::cout <<"[" << buffer << "] " << std::flush;
}

Account::Account( int initial_deposit )
{
	this->_displayTimestamp();
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";crated" << std::endl;
	this->_nbAccounts++;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	this->_nbDeposits += 1;
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount - deposit << ";deposits:" << deposit << ";amount:" 
		<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	_totalNbDeposits += 1;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" 
			<< this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" 
			<< this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";withdrawal:" << ";refused" << std::endl;
	return (false);
}
