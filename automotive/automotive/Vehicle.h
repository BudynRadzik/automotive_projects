#pragma once
#include<string>;

using namespace std;

class Vehicle
{
	//arguments
public:
	string brand, model, vehicle_type, petrol_type, colour;
	double price { 0 };
	int prod_year{ 0 };
	// methods
	virtual void add() = 0;
	virtual void remove() = 0;
	virtual void display() = 0;
	virtual ~Vehicle() {};
	
};

