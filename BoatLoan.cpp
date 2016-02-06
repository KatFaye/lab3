//boatLoan.cpp
//Implementation of boatLoan, which defines the plundered boat
//Authors: Kat Herring and Kate Barlock

#include "BoatLoan.h"

	BoatLoan::BoatLoan(int newLootMax, int numCan, string newName){

		//initialize boat loan
		setMaxLootStorage(newLootMax);
		setNumOfCannons(numCan);
		setBoatName(newName);

	}

	int BoatLoan::getMaxLootStorage(){

		return maxLootStorage;

	}

	void BoatLoan::setMaxLootStorage(int newLootMax){

		//error checking

		//set loot max
		maxLootStorage = newLootMax;

	}

	int BoatLoan::getNumOfCannons(){

		return numOfCannons;

	}

	void BoatLoan::setNumOfCannons(int numCan){

		//error checking

		//set cannons
		numOfCannons = numCan;

	}

	string BoatLoan::getBoatName(){

		return boatName;

	}

	void BoatLoan::setBoatName(string newName){

		//error checking?

		//set boat name
		boatName = newName;

	}

