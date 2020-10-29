#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student
{
public:
	Student(std::string lName = "", std::string fName = "") : lastName(lName), firstName(fName) {}
	
	std::string getLastName() const { return lastName; }
	std::string getFirstName() const { return firstName; }
	void setName(std::string lName, std::string fName)
	{
		lastName = lName;
		firstName = fName;
	}

private:
	std::string lastName;
	std::string firstName;
};

#endif

