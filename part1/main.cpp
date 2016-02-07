//main.cpp
//AUthors: Kat Herring and Kate Barlock
//driver program for Blackbeard's bank

#include "CheckingAccount.h"
#include "BoatLoan.h"
#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {

	//create check account object
	CheckingAccount c1("Jack Sparrow", "Black Pearl", 1000);
	c1.print();
	c1.deposit(500); //test that deposit function works
	c1.print();

	//test boat loan
	BoatLoan b1;
	b1.print(); //print account status
	b1.printLoanTable(); //print out loan table (currnet balance, payment, interest over every month of loan)
	b1.deposit(500); //demonstrate deposit ability
	b1.print(); //print account status

	return 0;
}