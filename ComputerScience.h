#ifndef COMPUTERSCIENCE_H
#define COMPUTERSCIENCE_H
#include"Student.h"
class ComputerScience :public Student
{
private:
	double project, midTerm, finalTerm;
public:
	ComputerScience(int, string);
	void setProject(double);
	void setMidTerm(double);
	void setFinalTerm(double);
	double getProject();
	double getMidTerm();
	double getFinalTerm();
	void readMarks(ifstream&);
	void calculateTotalMarksAndGrade();
	void writeRecord(ofstream&);
	~ComputerScience();

};
#endif // !COMPUTERSCIENCE_H