//checkingAccount.cpp
//Implementation of Blackbeard's checking accounts
//Author: Kate Barlock and Kat Herring

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(string accountName, string crewName){

	setAccountHolder(accountName);
	setCrewAffiliation(crewName);
}

string CheckingAccount::getAccountHolder(){

	return accountHolder;
}

void CheckingAccount::setAccountHolder(string accountName){

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

//what to dooooo with this
virtual void print(); //print the account and user status
