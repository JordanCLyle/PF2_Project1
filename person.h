#ifndef PERSON_H
#define PERSON_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
public:
	// Constructor methods
	Person();
	Person(const Person& person);
	~Person();

	// Get and Set methods
	string getFirstName();
	string getLastName();
	int getBirthYear();
	int getDeathYear();
	string getContribution();

	void setFirstName(string firstname);
	void setLastName(string lastname);
	void setBirthYear(int birthyear);
	void setDeathYear(int deathyear);
	void setContribution(string Contribution);

	// Other methods
	void printPerson();

private:
	// Object attributes
	string firstName;
	string lastName;
	int birthYear;
	int deathYear;
	string contribution;
};
#endif
