//OvernightPackage class definition
// Kat Herring and Kate Barlock

class OvernightPackage : public Package {

public:
	OvernightPackage();
	//redefinte calculateCost to add additional cost to cost per ounce 
	//Note: use base class's calculateCost function

private:
	double extraCostPerOunce;

	

};
