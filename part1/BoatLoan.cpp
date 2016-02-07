//boatLoan.cpp
//Implementation of boatLoan, which defines the plundered boat
//Authors: Kat Herring and Kate Barlock

#include "BoatLoan.h"
#include <iomanip>
#include <iostream>

BoatLoan::BoatLoan(int newLootMax, int numCan, string newName, int payment, int bal, double pirRate, int paySched) : BankAccount(bal, pirRate, paySched) {

	//initialize boat loan
	setMaxLootStorage(newLootMax);
	setNumOfCannons(numCan);
	setBoatName(newName);
	setPayment(payment);

	//initialize through base class
	setBalance(bal);
	setPirateRate(pirRate);
	setPaySchedule(paySched);
}

void BoatLoan::makeLoanTable(){

	int month = 1; //intialize month counter
	int bal = getBalance();
	int rate = getPirateRate();
	int payFreq = getPaymentSchedule();
	
	while (bal > 0) { //while boat loan has not been paid off

		// !!! interest might have to be changed back to an int...
	    int interest = bal * rate/payFreq*100; //calculate interest (based on yearly frequency of payment)
	    bal += interest; //add interest to principal

	    if (bal > Payment) { // if boatLoan is ongoing, print 
	    	bal -= Payment; //calculate new balance
			cout << fixed << setprecision(2) << setw(3) << month << setw(14) << Payment << setw(12) << interest << setw(16) << bal << endl; //print results
	    } else { //print final Payment information
	        Payment = bal; //calculate final Payment
	        bal -= Payment; //bring balance to 0
	        cout << fixed << setprecision(2) << setw(3) << month << setw(14) << Payment << setw(12) << interest << setw(16) << bal << endl; //print results
	    }
		month+= payFreq; //advance month counter
	}
	numberofMonths = month;
	setBalance(bal); //update BoatLoan balance
}

void BoatLoan::calcRemainingMonths(){

	int month = 1; //intialize month counter
	int bal = getBalance();
	int rate = getPirateRate();
	int payFreq = getPaymentSchedule();
	
	while (bal > 0) { //while boat loan has not been paid off

		//!!! interest might have to be changed back to an int
	    int interest = bal * rate/payFreq*100; //calculate interest (based on yearly frequency of Payment)
	    bal += interest; //add interest to principal

	    if (bal > Payment) { // if boatLoan is ongoing 
	    	bal -= Payment; //calculate new balance
	    } else { //calculate final Payment info
	        Payment = bal; //calculate final Payment
	        bal -= Payment; //bring balance to 0  
	    }
		month+= payFreq; //advance month counter //!! check that this is right!
	}
	numberofMonths = month;
	setBalance(bal); //update BoatLoan balance
}

void BoatLoan::print() { //print status of loan

	cout << "***" << boatName << "'s Boat Loan Status***" << endl;
	cout << "You only have " << numberofMonths << "until your galleon is your own!" << endl;
	cout << "Please fill up your " << maxLootStorage << " sqft and use your " << numOfCannons << "cannons responsibily." << endl;
}

void BoatLoan::setPayment(int payment){
	Payment = payment;
}

int BoatLoan::getMaxLootStorage(){
	return maxLootStorage;
}

void BoatLoan::setMaxLootStorage(int newLootMax){
	
	while(newLootMax <= 0){ //error checking
		cout << "Error! Maximum Loot Storage must be a postive quantity. Input new maximum: ";
		cin >> maxLootStorage;
	}
	//set loot max
	maxLootStorage = newLootMax;
}

int BoatLoan::getNumOfCannons(){
	return numOfCannons;
}

void BoatLoan::setNumOfCannons(int numCan){

	while(numCan <= 0){ //error checking - ship must have at least one cannon
		cout << "Error! Please input a valid (nonzero/positive) number of cannons: ";
		cin >> numCan;
	}
	
	numOfCannons = numCan; //set cannons
}

string BoatLoan::getBoatName(){
	return boatName;
}

void BoatLoan::setBoatName(string newName){
	boatName = newName; //set boat name
}

