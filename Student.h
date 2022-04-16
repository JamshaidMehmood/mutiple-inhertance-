#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class Student
{
protected:
	int rollNo;
	string name;
	double totalMarks;
	char grade;
public:
	Student(int,string);
	void setRollNo(int);
	void setName(string);
	void setTotalMarks(double);
	void setGrade(char);
	int getRollNo();
	string getName();
	double setTotalMarks();
	char setGrade();
	virtual void readMarks(ifstream&) = 0;
	virtual void calculateTotalMarksAndGrade() = 0;
	virtual void writeRecord(ofstream&) = 0;
	virtual ~Student();
};
#endif // !STUDENT_H
