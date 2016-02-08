//OvernightPackage class implementation
// Kat Herring and Kate Barlock

#include "OvernightPackage.h"
#include "Package.h"

OvernightPackage::OvernightPackage(string newName, int zipcode, double weight, double costPerOunce, double extraCostPerOunce): Package (newName, zipcode, weight, costPerOunce){ //constructor

	ExtraCostPerOunce = extraCostPerOunce;

}

double OvernightPackage::CalculateCost(){

	setCost(getCostPerOunce() + ExtraCostPerOunce);
	double cost = Package::CalculateCost(); //i don't know if this is what they want... said to use Package's cost function
	return cost;
}
