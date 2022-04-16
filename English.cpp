#include<iostream>
#include<iomanip>
#include<fstream>
#include"English.h"
using namespace std;
English::English(int r, string n) :Student(r,n)
{
	cout << "Eng Const\n";
	attendence = 0;
	report = 0;
	midTerm = 0;
	finalTerm = 0;
}
void English::setAttendence(double atten)
{
	attendence = atten;
}
void English::setReport(double re)
{
	report = re;
}
void English::setMidTerm(double mi)
{
	midTerm = mi;
}
void English::setFinalTerm(double fi)
{
	finalTerm = fi;
}
double English::getAttendence()const
{
	return attendence;
}
double English::getReport()const
{
	return report;
}
double English::getMidTerm()const
{
	return midTerm;
}
double English::getFinalTerm()const
{
	return finalTerm;
}
void English::readMarks(ifstream& fin)
{
		//Student::readMarks(fin);
		fin >> attendence;
		fin >> report;		
		fin >> midTerm;
		fin >> finalTerm;
}
void English::calculateTotalMarksAndGrade()
{
	double a, b, c, d;
    a= attendence * 0.10;
	b = report * 0.30;
	c = midTerm * 0.30;
	d = finalTerm * 0.30;
	double total = a+b+c+d;
	if (total >= 90)
	{
		totalMarks = total;
		grade = 'A';
		//Student::setTotalMarks(total);
		//Student::setGrade('A');
	}
	else if (total >= 80 && total <= 89.99)
	{
		totalMarks = total;
		grade = 'B';
		//Student::setTotalMarks(total);
		//Student::setGrade('B');
	}
	else if (total >= 70 && total <= 79.99)
	{
		totalMarks = total;
		grade = 'C';
		//Student::setTotalMarks(total);
		//Student::setGrade('C');
	}

	else if (total >= 60 && total <= 69.99)
	{
		totalMarks = total;
		grade = 'D';
		//Student::setTotalMarks(total);
		//Student::setGrade('D');
	}
	else
	{
		totalMarks = total;
		grade = 'F';
		//Student::setTotalMarks(total);
		//Student::setGrade('F');
	}
}
void English::writeRecord(ofstream& fout)
{
		//Student::writeRecord(fout);
	    fout << rollNo << setw(20) << name << setw(20);
		fout << attendence << setw(20);
		fout << report << setw(20);
		fout << midTerm << setw(20);
		fout << finalTerm << setw(20);
		fout << totalMarks << setw(20);
		fout << grade << "\n";

		cout << rollNo << setw(20) << name << setw(20);
		cout << attendence << setw(20);
		cout << report << setw(20);
		cout << midTerm << setw(20);
		cout << finalTerm << setw(20);
		cout << totalMarks << setw(20);
		cout << grade << "\n";
}
English::~English()
{
	cout << "Eng des\n";
}