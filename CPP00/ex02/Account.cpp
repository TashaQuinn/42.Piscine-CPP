/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 05:01:33 by jbania            #+#    #+#             */
/*   Updated: 2022/10/16 19:21:17 by jbania           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    
    char formatted[50];
    std::time_t timestamp = std::time(NULL);
    
    if (std::strftime(formatted, sizeof(formatted), "%Y%m%d_%H%M%S", std::localtime(&timestamp)))
        std::cout << "[" << formatted << "] ";
} 

Account::Account(int initial_deposit) {
    
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    
    Account::_displayTimestamp();
    Account::_totalAmount += this->_amount;
    Account::_nbAccounts++;

    std::cout   << "index:" << this->_accountIndex << ";amount:" 
                << this->_amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos() {

    Account::_displayTimestamp();
    
    std::cout   << "accounts:" << Account::_nbAccounts << ";total:" 
                << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
                << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;

}

void	Account::displayStatus() const {
    
    Account::_displayTimestamp();
    
    std::cout   << "index:" << this->_accountIndex << ";amount:" 
                << this->_amount << ";deposits:" << this->_nbDeposits
                << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    
    Account::_displayTimestamp();
    
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    
    std::cout   << "index:" << this->_accountIndex << ";p_amount:" 
                << this->_amount << ";deposit:" << deposit << ";amount:"
                << this->_amount + deposit << ";nb_deposits:" 
                << this->_nbDeposits << std::endl;

    this->_amount += deposit;
    Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {

    Account::_displayTimestamp();

    std::cout   << "index:" << this->_accountIndex << ";p_amount:" 
                << this->_amount << ";withdrawal:";
    if (this->_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
    {
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
    
        std::cout << withdrawal << ";amount:" << this->_amount - withdrawal 
        << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        
        return true;
    }
}

Account::~Account() {
    
    Account::_displayTimestamp();
    
    std::cout   << "index:" << this->_accountIndex << ";amount:" 
                << this->_amount << ";closed" << std::endl;

    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
}

int	Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

int		Account::checkAmount( void ) const {
    return this->_amount;
}
