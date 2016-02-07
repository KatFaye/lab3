//BankAccount.h
//class definition for BankAccount
//Authors: Kat Herring and Kate Barlock

#include <string>

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

using namespace std;

class BankAccount {
public:
	BankAccount(int balance = 0, int paymentSchedule = 1, int minimumBalance = 100, double pirateRate = 15);
	int getBalance();
	void setBalance(int);
	int getMinimumBalance();
	void setMinimumBalance(int);
	double getPirateRate();
	void setPirateRate(double);
	int getPaymentSchedule();
	void setPaymentSchedule(int);
	virtual void print() = 0; //makes this an abstract class

private:
	int balance; //balance of account; recorded in dubloons
	int minimumBalance; //dubloons
	double pirateRate; //how much of your balance Blackbeard takes for security reasons
	int paymentSchedule; //how often a payment is due (in months)
};

#endif //_BANKACCOUNT_H_