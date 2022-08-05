#include <iostream>
#include "table.h"
using namespace std;

int main()
{
	Table reading;
	if (reading.readFile() == 1) // Creates table object and calls the method to read the text file into the vector.
	{
		return 0;
	}
	int selection;
	int i = 0;
	while (i == 0) // Loops the selection interface until the user is done.
	{
		cout << endl << "1) Find those with given first name." << endl;
		cout << "2) Find those with given last name." << endl;  // Gives selection of commands.
		cout << "3) Find those with given birth year." << endl;
		cout << "4) Quit." << endl;
		cout << "Choose your selection number: ";
		cin >> selection;
		switch (selection) // Decides which method to call based on the command.
		{
		case 1:
		{
			reading.searchFirstName();
			break;
		}
		case 2:
		{
			reading.searchLastName();
			break;
		}
		case 3:
		{
			reading.searchYear();
			break;
		}
		default:
		{
			i = 1; // Tells the interface loop to stop when the user decides to quit.
			break;
		}
		}
	}
	return 0;
}
