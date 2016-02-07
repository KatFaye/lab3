//boatLoan.h
//Class definition for boatLoan
//Authors: Kate Barlock and Kat Herring

#include "BankAccount.h"

#ifndef _BOATLOAN_H_
#define _BOATLOAN_H_

class BoatLoan : public BankAccount {

public:
	BoatLoan(int maxLootStorage = 100000, int numOfCannons = 20, string boatName = "The Flying Dutchman", int Payment = 500, int balance = 10000, double pirateRate = 15, int paymentSchedule = 1);
	int getMaxLootStorage();
	void setMaxLootStorage(int maxlootstorage);
	int getNumOfCannons();
	void setNumOfCannons(int numCannons);
	string getBoatName();
	void setBoatName(string boatname);
	void setPayment(int payment);
	
	virtual void print(); //prints status of boat, crew, and account
	
private:
	void calcRemainingMonths(); //calculate months until boat is paid off
	void makeLoanTable(); //print out loan summary table
	int Payment; //normal payment (in dubloons)
	int numberofMonths; //remaining months until boat is paid off
	int maxLootStorage; //in sqft
	int numOfCannons; //number of cannons on loaned ship
	string boatName;

};

#endif //_BOATLOAN_H_