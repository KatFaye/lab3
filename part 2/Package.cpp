//Implementation for package (base) class
// Kat Herring and Kate Barlock

Package::Package(){



}


double CalculateCost(double weight, double costPerOunce){ //calculate shipping cost

	return (weight * costPerOunce);

} 

	string name;
	int zipcode;
	double weight; //in ounces //must error check to make non-negative
	double costPerOunce;