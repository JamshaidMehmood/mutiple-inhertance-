#include<iostream>
#include<iomanip>
#include<fstream>
#include"ComputerScience.h"
ComputerScience::ComputerScience(int r, string n) :Student(r,n)
{
	cout << "Comp Science const\n";
	project = 0, midTerm = 0, finalTerm = 0;
}
void ComputerScience::setProject(double p)
{
	project = p;
}
void ComputerScience::setMidTerm(double m)
{
	midTerm = m;
}
void ComputerScience::setFinalTerm(double f)
{
	finalTerm = f;
}
double ComputerScience::getProject()
{
	return project;
}
double ComputerScience::getMidTerm()
{
	return midTerm;
}
double ComputerScience::getFinalTerm()
{
	return finalTerm;
}
void ComputerScience::readMarks(ifstream& fin)
{
		//Student::readMarks(fin);
		fin >> project;
		fin >> midTerm;
		fin >> finalTerm;
}
void ComputerScience::calculateTotalMarksAndGrade()
{
	double a, b, c;
    a= project * 0.25;
	b = midTerm * 0.35;
	c= finalTerm * 0.40;
	double total =a+b+c;
	if (total >= 90)
	{
		totalMarks = total;
		grade = 'A';

	}
	else if (total >= 80 && total <= 89.99)
	{
		totalMarks = total;
		grade = 'B';
	}
	else if (total >= 70 && total <= 79.99)
	{
		totalMarks = total;
		grade = 'C';

	}

	else if (total >= 60 && total <= 69.99)
	{
		totalMarks = total;
		grade = 'D';

	}
	else
	{
		totalMarks = total;
		grade = 'F';

	}

}
void ComputerScience::writeRecord(ofstream& fout)
{
		//Student::writeRecord(fout);
	    fout << rollNo << setw(20) << name << setw(20);
     	fout << project << setw(20);
		fout << midTerm << setw(20);
		fout << finalTerm << setw(20);
		fout << totalMarks << setw(20);
		fout << grade << "\n";
		cout << rollNo << setw(20) << name << setw(20);
		cout << project << setw(20);
		cout << midTerm << setw(20);
		cout << finalTerm << setw(20);
		cout << totalMarks << setw(20);
		cout << grade << "\n";
}
ComputerScience::~ComputerScience()
{
	cout << "comp des\n";
}