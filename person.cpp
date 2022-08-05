#include "table.h"

Person::Person()
{
	firstName = "";
	lastName = "";
	birthYear = 0; // Initializes private variables to default.
	deathYear = 0;
	contribution = "";
}
Person::Person(const Person& person)
{
	firstName = person.firstName;
	lastName = person.lastName;
	birthYear = person.birthYear; // Copies person values into private variables.
	deathYear = person.deathYear;
	contribution = person.contribution;
}

Person::~Person()
{
}

string Person::getFirstName()
{
	return firstName;
}
string Person::getLastName()
{
	return lastName;
}
int Person::getBirthYear()
{
	return birthYear;
}
int Person::getDeathYear()
{
	return deathYear;
}
string Person::getContribution()
{
	return contribution;
}
void Person::setFirstName(string firstname)
{
	firstName = firstname;
}
void Person::setLastName(string lastname)
{
	lastName = lastname;
}
void Person::setBirthYear(int birthyear)
{
	birthYear = birthyear;
}
void Person::setDeathYear(int deathyear)
{
	deathYear = deathyear;
}
void Person::setContribution(string Contribution)
{
	contribution = Contribution;
}
void Person::printPerson()
{
	cout << endl << getFirstName() << endl << getLastName() << endl;
	cout << getBirthYear() << endl << getDeathYear() << endl;         // Prints all of the information associated with the person
	cout << getContribution().substr(1) << endl << endl;			  // on the text file.
}
