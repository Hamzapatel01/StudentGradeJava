#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string Name)
{
	this->Name;
	this->TotalGrade=0;
}
void Student::AddGrade(double Grade)
{
	this->TotalGrade += Grade;
}
double Student::getTotalGrade()
{
	return this->TotalGrade;
}
double Student::CalcAverage(int number)
{
	return this->TotalGrade/number;
}
string Student::getLetterGrade(double gradegot)
{
	if (gradegot >= 100)
	{
		return "A+";
	}
	else if (gradegot >= 93)
	{
		return "A";
	}
	else if (gradegot >= 90)
	{
		return "A-";
	}
	else if (gradegot >= 87)
	{
		return "B+";
	}
	else if (gradegot >= 83)
	{
		return "B";
	}
	else if (gradegot >= 80)
	{
		return "B-";
	}
	else if (gradegot >= 77)
	{
		return "C+";
	}
	else if (gradegot >= 73)
	{
		return "C";
	}
	else if (gradegot >= 70)
	{
		return "C-";
	}
	else if (gradegot >= 67)
	{
		return "D+";
	}
	else if (gradegot >= 63)
	{
		return "D";
	}
	else if (gradegot >= 60)
	{
		return "D-";
	}
	else 
	{
		return "F";
	}
}

