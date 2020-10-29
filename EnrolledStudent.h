/*
Lu, Jin

October 22, 2020

CS A250
Exam 2
*/
#ifndef ENROLLEDSTUDENT_H
#define ENROLLEDSTUDENT_H
#include "Student.h"
#include <iostream>
#include <map>

class EnrolledStudent : public Student
{
	friend std::ostream& operator<<(std::ostream&, const EnrolledStudent&);

public:
	EnrolledStudent();
	EnrolledStudent(const std::string&, const std::string&);
	void addClass(const std::string&, const std::string&);
	double getGPA() const;
	bool operator<(const EnrolledStudent&) const;

private:
	std::map <std::string, std::string> courses;

};

#endif