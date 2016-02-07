//Package.h
//Author: Kat Herring & Kate Barlock
// class definition for Package used by shipping companies

#include <string>
#include <iostream>

class Package {

public:
	Package();

private:
	string name;
	int zipcode;
	double weight; //in ounces //must error check to make non-negative
	double costPerOunce;
};
