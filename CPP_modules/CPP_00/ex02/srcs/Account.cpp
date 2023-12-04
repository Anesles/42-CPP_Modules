/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:35:36 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/04 17:37:57 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <ctime>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = _nbAccounts;
	Account::_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		t_ptr;
	struct tm	*t;

	std::time(&t_ptr);
	t = localtime(&t_ptr);
	std::cout	<< '[' 
				<< t->tm_year + 1900
				<< std::setw(2) << std::setfill('0')
				<< t->tm_mon + 1
				<< t->tm_mday
				<< '_'
				<< t->tm_hour
				<< t->tm_min
				<< t->tm_sec;
	std::cout 	<< "] ";
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts() << ';'
				<< "total:" << Account::getTotalAmount() << ';'
				<< "deposits:" << Account::getNbDeposits() << ';'
				<< "withdrawals:" << Account::getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "deposits:" << this->_nbDeposits << ';'
				<< "withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;
	
	this->_amount += deposit;
	this->_nbDeposits++;
	
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "p_amount:" << p_amount << ';'
				<< "deposit:" << deposit << ';'
				<< "amount:" << this->_amount << ';'
				<< "nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	
}