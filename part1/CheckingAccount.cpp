//checkingAccount.cpp
//Implementation of Blackbeard's checking accounts
//Author: Kate Barlock and Kat Herring

#include "CheckingAccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(string accountName, string crewName, int bal) : BankAccount(bal) {

	setAccountHolder(accountName);
	setCrewAffiliation(crewName);
	setBalance(bal);
}

string CheckingAccount::getAccountHolder(){

	return accountHolder;
}

void CheckingAccount::setAccountHolder(string clientName){

	//error checking?

	accountHolder = clientName;
}

string CheckingAccount::getCrewAffiliation(){

	return crewAffiliation;
}

void CheckingAccount::setCrewAffiliation(string crewName){

	//error checking?

	crewAffiliation = crewName;
}
void CheckingAccount::print() { //print the account and user status
	cout << "Account Summary for " << accountHolder << ":" << endl;
	cout << "==============" << endl;
	cout << "Current Balance: " << getBalance() << endl;
	cout << "Upcoming insurance and maintenace fee: " << nextPayment() << endl;
	cout << "Next Payment Date:";

}
void CheckingAccount::deposit(int addBal) {
	int temp;
	temp = getBalance() + addBal;
	setBalance(temp);
}