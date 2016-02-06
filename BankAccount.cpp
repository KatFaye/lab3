//BankAccount.cpp
//interface and member functions for BankAccount.cpp
//Author: Kat Herring and Kate Barlock

#include "BankAccount.h"
#include <iostream>
 
using namespace std; //adding this fixed the string problems

BankAccount::BankAccount(int newBal, int minBal, double newRate) { //constructor. make/initialize new bank account class object

	//initialize account
	setMinimumBalance(minBal);
	setPirateRate(newRate);
	setBalance(newBal);

}

int BankAccount::getBalance(){ //return current account balance

	return balance;
}

void BankAccount::setBalance(int newBal){ //set account balance

	//ensure that balance meets minimum balance requirement
	while(newBal < minimumBalance){ 
		cout << "Error: Insufficient funds to open an account with Blackbeard" << endl; //output error message
		cout << "Please enter a new balance: "; // ask for valid balance
		cin >> newBal; //read in new balance
	} //end while

	balance = newBal; //set account balance

}

int BankAccount::getMinimumBalance(){ //is this functions necessary?

	return minimumBalance;

}

void BankAccount::setMinimumBalance(int minBal){

	//error checking? there's a default value, but user-given values could still be invalid...
	minimumBalance = minBal;

}

double BankAccount::getPirateRate(){ //return pirateRate

	return pirateRate;

}

void BankAccount::setPirateRate(double newRate){ //set pirateRate variable of BankAccount class object

	//error checking:
	while(newRate < 0){ //while the given rate is negative
		cout << "Error: Invalid rate. Must be positive." << endl; //output error message
		cout << "Please enter a new rate: "; // ask for valid rate
		cin >> newRate; //read in new rate
	}

	//set pirateRate
	pirateRate = newRate; //how much of your balance Blackbeard takes for security reasons; quarterly charge

}