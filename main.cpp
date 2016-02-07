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

	return 0;
}