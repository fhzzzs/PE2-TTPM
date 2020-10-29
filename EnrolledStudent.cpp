/*
Lu, Jin

October 22, 2020

CS A250
Exam 2
*/
#include "EnrolledStudent.h"
#include <iomanip>
using namespace std;

EnrolledStudent::EnrolledStudent() : Student(), courses() {}

EnrolledStudent::EnrolledStudent(const std::string& lName, const std::string&fName) 
	: Student(lName, fName), courses() {}

void EnrolledStudent::addClass(const std::string& Class, const string& Grade)
{
	courses.insert(pair<string, string>(Class, Grade));
}
double EnrolledStudent::getGPA() const
{
	double TotalGPA = 0.0;
	int NumOfCourses = 0;
	map<string, double> valMap{
		{"A+",4.3} ,{"A",4.0}, {"A-",3.7},
		{"B+",3.3} ,{"B",3.0} ,{"B-",2.7},
		{"C+",2.3} ,{"C",2.0} ,{"C-",1.7},
		{"D+",1.3} ,{"D",1.0} ,{"D-",0.7},{"F",0.0}
	};
	for (auto i = courses.begin(); i != courses.end(); ++i)
	{
		TotalGPA += valMap.find(i->second)->second;
		++NumOfCourses;
	}
	return (TotalGPA / NumOfCourses);
}
bool EnrolledStudent::operator<(const EnrolledStudent& stu2) const
{
	return (this->getLastName() < stu2.getLastName());
}
ostream& operator<<(ostream& out, const EnrolledStudent& stu1)
{
	out << "Student Name: " << stu1.getFirstName() << " " << stu1.getLastName() << '\n';
	out << "Course Grades:" << '\n';

	for (auto i = stu1.courses.begin(); i != stu1.courses.end(); ++i)
	{
		out << setw(12) << right << (i->first) << "-> " <<  (i->second) << endl;
	}
	out << "GPA : " << setprecision(2) << fixed << stu1.getGPA() << endl;
	out << endl;
	return out;
}