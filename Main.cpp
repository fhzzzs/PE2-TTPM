/*
Lu, Jin

October 22, 2020

CS A250
Exam 2
*/
#include "Student.h"
#include "EnrolledStudent.h"
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

// Add predicate function here if needed
// code below
bool compareFirstName(const EnrolledStudent& stu1, const EnrolledStudent& stu2)
{
	return !(stu1.getFirstName() < stu2.getFirstName());
}
bool compareGPA(const EnrolledStudent& stu1, const EnrolledStudent& stu2) 
{
	return !(stu1.getGPA() < stu2.getGPA()); 
}
// code above

int main()
{
	EnrolledStudent es1("Kohl", "David"), es2("Smith", "Jane"), es3("Nguyen", "Thomas");
	es1.addClass("Calculus", "A");
	es1.addClass("History", "A-");
	es1.addClass("English", "B+");
	es2.addClass("Algerbra", "A");
	es2.addClass("Comp Sci", "B");
	es3.addClass("Psychology", "A");
	es3.addClass("History", "A-");
	es3.addClass("Spanish", "A-");

	vector<EnrolledStudent> students{ es1, es2, es3 };
	vector<EnrolledStudent>::iterator begin = students.begin();
	vector<EnrolledStudent>::iterator end = students.end();
	// Call the sort function to sort the students by first name in desending order and 
	sort(begin, end, compareFirstName);

	// again print all the students
	for (auto i = begin; i != end; ++i)
	{
		cout << *i;
	}

	// Then call the sort function from the algorithm library to sort the students by gpa in 
	sort(begin, end, compareGPA);
	// desending order and print all the students

	// Your code on below.
	for (auto i = begin; i != end; ++i)
	{
		cout << *i;
	}
	// Your code above

	cout << "\n\n";

	system("pause");
	return EXIT_SUCCESS;
}