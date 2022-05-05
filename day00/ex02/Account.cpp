#include "Account.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_nbAccounts++;
	Account::_totalAmount += Account::checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" <<std::endl;
	return;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= Account::checkAmount();
	return;
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d_%X", &tstruct);
	std::string newstr="";
	char c = ':';
    for(int i=0; i < (int)strlen(buf);i++){
 
        if(buf[i]!=c){ //if character not to be removed
            // string(1,x) converts character 'x' to string "x"
            newstr+=std::string(1,buf[i]); //apend to new str
        }
	}
	std::cout << "[" << newstr << "]";
}

void Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() << ";";
	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;
	else
	{
		Account::_totalNbDeposits++;
		this->_amount += deposit;
		this->_nbDeposits++;
		Account::_totalAmount += deposit;
		std::cout << "deposit:" << deposit << ";amount:" << Account::checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout <<  "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() << ";";
	if(this->_amount >= withdrawal)
	{
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";amount:" << Account::checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return 1;
	}
	else
		std::cout << "withdrawal:refused" << std::endl;
	return 0;
}

int Account::checkAmount(void)const{
	return this->_amount;
}

int Account::getNbAccounts(void){
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void){
	return Account::_totalAmount;
}

int Account::getNbDeposits(void){
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return Account::_totalNbWithdrawals;
}

void Account::displayStatus(void)const{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
