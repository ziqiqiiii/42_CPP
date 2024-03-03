/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:52 by tzi-qi            #+#    #+#             */
/*   Updated: 2024/02/20 13:08:53 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << Account::_nbAccounts << ";amount:" << this->_amount << ";closed" << std::endl;
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
}

void    Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year;
    std::cout << std::setw(2) << std::setfill('0');
    std::cout << 1 + ltm->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << std::setw(2);
    std::cout << ltm->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0');
    std::cout << ltm->tm_hour;
    std::cout << std::setw(2) << std::setfill('0');
    std::cout << ltm->tm_min;
    std::cout << std::setw(2) << std::setfill('0');
    std::cout << ltm->tm_sec << "] ";
}

void    Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}