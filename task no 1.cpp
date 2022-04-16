#include <iostream>
#include <iomanip>
#include <fstream>
#include"Student.h"
#include"English.h"
#include"ComputerScience.h"
#include"Math.h"
using namespace std;
int main()
{
	Student** sp=0;
	string name,indication,name1;
	int n=0,roll;
	cout << "Enter name of input file ::";
	getline(cin,name);
	ifstream fin(name);
	if (!fin.fail())
	{
		fin >> n;
		sp = new Student * [n];
		for (int i = 0; i < n; i++)
		{
			fin >> roll;
			getline(fin,name1);
			fin >> indication;
			if (indication == "MT")
			{
				Math *m = new Math(roll,name1);
				m->readMarks(fin);
				m->calculateTotalMarksAndGrade();
				sp[i] = m;
			}
			else if (indication == "CS")
			{
				ComputerScience *cm = new ComputerScience(roll, name1);
				cm->readMarks(fin);
				cm->calculateTotalMarksAndGrade();
				sp[i] = cm;
			}
			else if (indication == "EN")
			{
				English *en= new English(roll, name1);
				en->readMarks(fin);
				en->calculateTotalMarksAndGrade();
				sp[i] = en;
			}
		}
	}
	else
	{
		cout << "Unable to open the file ::::!!\n";
	}
	fin.close();
	
	cout << "Enter name of ouput file ::";
	getline(cin, name);
	ofstream fout(name);
	if (!fout.fail())
	{
		fout << "Student's Grade Summary\n";
		fout << "============================\n";
		cout << "Student's Grade Summary\n";
		fout << "============================\n";
		cout << "============================\n";
		fout << n << endl<<endl << endl;
		cout << n << endl << endl << endl;
		fout << "ENGLISH CLASS\n";
		cout << "ENGLISH CLASS\n";
		cout << "============================\n";
		fout << "Attendance (A,10%) , Report (R, 30%), Midterm (M, 30%) , Final (F, 30%)\n\n";
		cout << "Attendance (A,10%) , Report (R, 30%), Midterm (M, 30%) , Final (F, 30%)\n\n";
		fout << "Roll No.\t\t\tStudent Name" << setw(15) << "A" << setw(15) << "R" << setw(15) << "M" << setw(15) << "F" << setw(15) << "Total" << setw(15) << "Grade\n";
		cout << "Roll No." << setw(10) << "Student Name" << setw(15) << "A" << setw(15) << "R" << setw(15) << "M" << setw(15) << "F" << setw(15) << "Total" << setw(15) << "Grade\n";
		cout << "--------------------------------------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < n; i++)
		{
			English* eng = dynamic_cast<English*>(sp[i]);
			if (eng != NULL)
			{

				sp[i]->writeRecord(fout);

			}
			
		}
		fout << "COMPUTER SCIENCE CLASS\n";
		cout << "COMPUTER SCIENCE CLASS\n";
		cout << "--------------------------\n";
		cout << "--------------------------\n";
		fout<< "Project (P,25%) , Midterm (M, 35%) , Final (F, 40%)\n\n";
		cout<< "Project (P,25%) , Midterm (M, 35%) , Final (F, 40%)\n\n";
		fout << "Roll No.\t\t\tStudent Name" << setw(15) << "P" << setw(15) << "M" << setw(15) << "F" << setw(15) << "Total" << setw(15) << "Grade\n";
		cout << "Roll No.\t\t\tStudent Name" << setw(15) << "P" << setw(15) << "M" << setw(15) << "F" << setw(15) << "Total" << setw(15) << "Grade\n";
		cout << "--------------------------------------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < n; i++)
		{
			ComputerScience* cmp = dynamic_cast<ComputerScience*>(sp[i]);
			if (cmp != NULL)
			{
				sp[i]->writeRecord(fout);

			}
		}
		fout << "MATH CLASS\n";
		cout << "MATH CLASS\n";
		cout << "--------------------------\n";
		cout << "--------------------------\n";
		fout << "QuizAverage (Q,25%) , HomeWork (H, 25%) , Final (F, 50%)\n\n";
		cout << "QuizAverage (Q,25%) , HomeWork (H, 25%) , Final (F, 50%)\n\n";
		fout << "Roll No.\t\t\tStudent Name" << setw(15) << "A" << setw(15) << "R" << setw(15) << "M" << setw(15) << "F" << setw(15) << "Total"<<setw(15)<<"Grade\n";
		cout << "Roll No." << setw(10) << "Student Name" << setw(15) << "Q" << setw(15) << "H" << setw(15) << "F" << setw(15) << "Total" << setw(15) << "Grade\n";
		cout << "--------------------------------------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < n; i++)
		{
			Math* cmp = dynamic_cast<Math*>(sp[i]);
			if (cmp != NULL)
			{
				sp[i]->writeRecord(fout);

			}
		}
	}
	else
	{
		cout << "Unable to open file for writting:::\n";
	}
	for (int i = 0; i < n; i++)
	{
		delete sp[i];
		sp[i]= 0;
	}
	delete[]sp;
	sp = 0;
	cout << "Done with every thing\n";
	
	return 0;
}

