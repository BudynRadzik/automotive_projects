#pragma once
#include<string>;

using namespace std;

class Vehicle
{
	//arguments
public:
	string brand, model, vehicle_type, petrol_type, colour;
	double price = 0 ;
	int prod_year = 0 ;
	// methods
	 Vehicle() {};
	virtual void display() = 0;
	virtual ~Vehicle() {};
	
};

