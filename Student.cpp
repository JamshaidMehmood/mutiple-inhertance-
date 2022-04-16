#include<iostream>
#include<fstream>
#include"Student.h"
using namespace std;
Student::Student(int  a,string b)
{
	cout << "Student const\n";
	rollNo = a;
	name =b;
	totalMarks = 0;
	grade = '\0';
}
void Student::setRollNo(int a)
{
	rollNo = a;
}
void Student::setName(string b)
{
	name = b;
}
void Student::setTotalMarks(double c)
{
	totalMarks = c;
}
void Student::setGrade(char d)
{
	grade = d;
}
int Student::getRollNo()
{
	return rollNo;
}
string Student::getName()
{
	return name;
}
double Student::setTotalMarks()
{
	return totalMarks;
}
char Student::setGrade()
{
	return grade;
}
void Student::readMarks(ifstream& fin)
{
}
void Student::calculateTotalMarksAndGrade()
{
}
void Student::writeRecord(ofstream& fout)
{
}
Student::~Student()
{
	cout << "Student des\n";
}