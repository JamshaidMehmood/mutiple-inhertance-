#ifndef MATH_H
#define MATH_H
#include"Student.h"
class Math:public Student
{
private:
	double quizAver, homeWork, finalMarks;
public:
	Math(int, string);
	void setQuizAverage(double);
	void setHomeWork(double);
	void setFinalMarks(double);
	double getQuizAverage();
	double getHomeWork();
	double getFinalMarks();
	void readMarks(ifstream&);
	void calculateTotalMarksAndGrade();
	void writeRecord(ofstream&);
	~Math();
};
#endif // !MATH_H
