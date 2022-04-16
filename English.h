#ifndef ENGLISH_H
#define ENGLISH_H
#include"Student.h"
class English :public Student
{
private:
	double attendence, report, midTerm, finalTerm;
public:
	English(int, string);
	void setAttendence(double);
	void setReport(double);
	void setMidTerm(double);
	void setFinalTerm(double);
	double getAttendence()const;
	double getReport()const;
	double getMidTerm()const;
	double getFinalTerm()const;
	void readMarks(ifstream&);
	void calculateTotalMarksAndGrade();
	void writeRecord(ofstream&);
	~English();


};
#endif // !ENGLISH_H
