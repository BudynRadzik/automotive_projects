#pragma once
#include <vector>
#include"Vehicle.h"

class Dealer
{
private:
	std::vector<Vehicle *> vehicles;
public:
	void add();
	void remove();
	void sort();
	void display_all();
	

};

