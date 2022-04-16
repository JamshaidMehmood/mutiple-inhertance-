#include<iostream>
#include<iomanip>
#include<fstream>
#include"Math.h"
using namespace std;
Math::Math(int  r, string n):Student(r,n)
{
	cout << "Math const\n";
	quizAver = 0, homeWork = 0, finalMarks = 0;
}
void Math::setQuizAverage(double q)
{
	quizAver = q;
}
void Math::setHomeWork(double h)
{
	homeWork = h;
}
void Math::setFinalMarks(double f)
{
	finalMarks = f;
}
double Math::getQuizAverage()
{
	return quizAver;
}
double Math::getHomeWork()
{
	return homeWork;
}
double Math::getFinalMarks()
{
	return finalMarks;
}
void Math::readMarks(ifstream& fin)
{
	double dummy,dummyQuizAver=0;
	//Student::readMarks(fin);
		fin >> dummy;
		dummyQuizAver = dummyQuizAver+dummy;
		fin >> dummy;
		dummyQuizAver = dummyQuizAver + dummy;
		fin >> dummy;
		dummyQuizAver = dummyQuizAver + dummy;
		fin >> dummy;
		dummyQuizAver = dummyQuizAver + dummy;
		fin >> dummy;
		dummyQuizAver = dummyQuizAver + dummy;
		quizAver=dummyQuizAver/5;
		fin >> homeWork;
		fin >> finalMarks;
}
void Math::calculateTotalMarksAndGrade()
{
	double a, b, c;
	a = quizAver * 0.25;
	b = homeWork * 0.25;
	c = finalMarks * 0.50;
	double total = a+b+c;
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
void Math::writeRecord(ofstream& fout)
{
	//	Student::writeRecord(fout);
	    fout << rollNo << setw(20) << name << setw(20);
		fout << quizAver << setw(20);
		fout<< homeWork << setw(20);
		fout << finalMarks << setw(20);
		fout << totalMarks << setw(20);
		fout << grade << "\n";
		cout << rollNo << setw(20) << name << setw(20);
		cout << quizAver << setw(20);
		cout << homeWork << setw(20);
		cout << finalMarks << setw(20);
		cout << totalMarks << setw(20);
		cout << grade << "\n";
}
Math::~Math()
{
	cout << "Math des\n";
}








