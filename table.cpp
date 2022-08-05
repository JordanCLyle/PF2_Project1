//-----------------------------------------------------------
// Purpose: CPP file for the Table class.
//          This class cpp stores various People objects into an array
//			and utilized the array to preform different functions to
//			analyze the data.
// Author:  Jordan Lyle
//-----------------------------------------------------------
#include "table.h"
Table::Table()
{

}
Table::Table(const Table& table)
{
	for (unsigned int i = 0; i < people.size(); i++)
	{
		people[i] = people2[i];
	}
}

Table::~Table()
{
}
void Table::printTable()
{
	for (unsigned int i = 0; i < people.size(); i++)
	{
		people[i].printPerson(); // Prints every person in the vector.
	}
}
bool Table::readFile()
{
	cout << "Enter filename: ";
	string filename = "";  
	cin >> filename; // Takes the name of the file to be read.

	ifstream din;
	din.open(filename.c_str()); 
	if (din.fail()) // Decides to continue commands only if the file can be opened.
	{
		cout << "Error: could not open file" << endl;
		return 1;
	}
	else
	{
		while (!din.eof()) // Repeats until the file is done.
		{
			Person data; // Creates a Person object to store in the vector.
			string First, Last, Info;
			int Birth, Death;
			din >> First >> Last >> Birth >> Death;
			getline(din, Info);                        // Gets all of the info from the file and stores it in the Person object.
			data.setFirstName(First);
			data.setLastName(Last);
			data.setBirthYear(Birth);
			data.setDeathYear(Death);
			data.setContribution(Info);
			people.push_back(data); // Adds the info of the Person object to the end of the vector.
		}
	}
	return 0;
}
bool Table::searchFirstName()
{
	string name;
	cout << "What first name are you searching for?: ";
	cin >> name;
	int count = 0;
	for (unsigned int i = 0; i < people.size(); i++)
	{
		if (people[i].getFirstName() == name) // Figures out if the inputted name is equivalent to a first name in the data.
		{
			people[i].printPerson(); // If so, then prints all of the info of the people with the first name.
			count++;
		}
	}
	if (count == 0)
	{
		cout << "It looks like what you typed was not found, try again." << endl;
	}
	return 0;
}
bool Table::searchLastName()
{
	string name;
	cout << "What last name are you searching for?: ";
	cin >> name;
	int count = 0;
	for (unsigned int i = 0; i < people.size(); i++)
	{
		if (people[i].getLastName() == name) // Figures out if the inputted name is equivalent to a last name in the data.
		{
			people[i].printPerson(); // If so, then prints all of the info of the people with the last name.
			count++;
		}
	}
	if (count == 0)
	{
		cout << "It looks like what you typed was not found, try again." << endl;
	}
	return 0;
}
bool Table::searchYear()
{
	int number;
	cout << "What birth year are you searching for?: ";
	cin >> number;
	int count = 0;
	for (unsigned int i = 0; i < people.size(); i++)
	{
		if (people[i].getBirthYear() == number) // Figures out if the inputted birth year is equivalent to a birth year in the data.
		{
			people[i].printPerson(); // If so, then prints all of the info of the people with the birth year.
			count++;
		}
	}
	if (count == 0)
	{
		cout << "It looks like what you typed was not found, try again." << endl;
	}
	return 0;
}
