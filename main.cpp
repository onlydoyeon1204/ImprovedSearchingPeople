#include <iostream>
#include <string>
#include "people.h"
using namespace std;

int main()
{ 
	People p;

	cout << "*****************************************************************" << endl;
	cout << "                        Enter the name                           " << endl;
	cout << "*****************************************************************" << endl;
	cout << " " << endl;
	cout << "NAME: ";
	cin >> p.name;

	output_information();

	if (p.isTrue == "FALSE")//If the name didn't exist in database
	{
		return 0;
	}

	/*Check wheter they will find average or not*/
	cout << " " << endl;
	cout << "*****************************************************************" << endl;
	cout << "    Do you want to calcuate an average of their age? (Yes / No)     " << endl;
	cout << "*****************************************************************" << endl; \
		cout << " " << endl;
	cout << "AVERAGE: ";
	cin >> p.ans;

	return p.checkAverageage(p.ans);
	
	return 0;
}