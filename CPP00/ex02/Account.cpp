/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfranco <thfranco@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:07:24 by thfranco          #+#    #+#             */
/*   Updated: 2024/12/30 18:28:55 by thfranco         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){}


Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::_nbAccounts++;

	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex <<
		";amount:" << this->checkAmount() <<
		";created" <<
	std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex <<
		";amount:" << this->checkAmount() <<
		";closed" <<
	std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout <<
		"accounts:" << getNbAccounts()<<
		";total:" << getTotalAmount() <<
		";deposits:" << getNbDeposits() <<
		";withdrawals:" << getNbWithdrawals() <<
	std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex <<
		";p_amount:" << this->checkAmount() <<
		";deposit:" << deposit;
		this->_amount += deposit;
	std::cout <<
		";amount:" << this->checkAmount() <<
		";nb_deposits:" << this->_nbDeposits <<
	std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout <<
			"index:" << this->_accountIndex <<
			";p_amount:" << this->_amount <<
			";withdrawal:refused" <<
		std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout <<
			"index:" << this->_accountIndex <<
			";p_amount:" << this->checkAmount() <<
			";withdrawal:" << withdrawal;
			this->_amount -= withdrawal;
		std::cout <<
			";amount:" << this->checkAmount() <<
			";nb_withdrawals:" << this->_nbWithdrawals <<
		std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex <<
		";amount:" << this->checkAmount()<<
		";deposits:" << this->_nbDeposits <<
		";withdrawals:" << this->_nbWithdrawals <<
	std::endl;
}

void Account::_displayTimestamp( void )
{
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout <<
		"[" << timenow.tm_year + 1900 <<
		std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 <<
		std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
		std::setfill('0') << std::setw(2) << timenow.tm_hour <<
		std::setfill('0') << std::setw(2) << timenow.tm_min <<
		std::setfill('0') << std::setw(2) << timenow.tm_sec << "] ";

}
