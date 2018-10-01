#include "Account.class.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts()<<";total:" << Account::getTotalAmount() << ";deposits:"<<Account::getNbDeposits()<<";withdrawals:"<<Account::getNbWithdrawals()<<std::endl;
}
Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;
    _nbAccounts++;
    checkAmount();
   _displayTimestamp();
   std::cout<< "index:" << this->_accountIndex <<";amount:"<< this->_amount <<";created"<< std::endl;
    return;
}
Account::~Account(void)
{
     _displayTimestamp();
    std::cout<< "index:" << this->_accountIndex <<";amount:"<< this->_amount <<";closed"<< std::endl;
    return;
}
void	Account::makeDeposit( int deposit )
{
   _displayTimestamp();
   std::cout<< "index:" << this->_accountIndex <<";p_amount:"<< this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << ";deposit:"<<deposit<<";amount"<<this->_amount <<";nb_deposits:"<<this->_nbDeposits<< std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
   _displayTimestamp();
   std::cout<< "index:" << this->_accountIndex <<";p_amount:"<< this->_amount;
    this->_amount -=withdrawal;
    if(this->_amount >= 0)
    {
        _totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";withdrawal:"<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:" <<this->_nbWithdrawals<<std::endl;
    }
    else 
    {
        this->_amount += withdrawal;
        std::cout << ";withdrawal:refused"<<std::endl;
    }
    return true;
}
int		Account::checkAmount( void ) const
{
    _totalAmount += this->_amount;
    return (_totalAmount);
}
void	Account::displayStatus( void ) const
{
   _displayTimestamp();
   std::cout<< "index:" << this->_accountIndex <<";amount:"<< this->_amount << ";deposits:"<< this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<< std::endl;
}
void	Account::_displayTimestamp( void )
{
    std::cout << "[20150406_153629] ";
}
Account::Account(void)
{
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    return;
}