#include "Menu.h"
#include <iostream>
using namespace std;
char number;
void Menu::display_menu()
{
	
	cout << "Press number from 1 to 3 to choice  a Vehicle: \n";
	cout << "	1 Cars \n";
	cout << "	2 Bikes\n";
	cout << "	3 Truck\n";
	cout << "	Q  to quit\n";
	cin >> number;
	
	if (number == '1')
		{
			cout << "cars" << endl;
		}
	else if (number == '2')
		{
			cout << "bikes" << endl;
		}
	else if (number == '3')
		{
			cout << "Trucks" << endl;
		}
	else if (number == 'Q' || 'q')
	{
		cout << "quit" << endl;
	}
	else 
	{
		cout << "Incorrect choice try again";
	}
	
	


		
	
	

	
};


