#include "Student.h"
#include <fstream>

#define STUDENTFILE "C:\\Users\\Oak\\Desktop\\student.dat"

int Student::count = 0;

Student::Student()
{
	count++;
}

Student::Student(string a, string b, string c)
{
	name = a;
	num = b;
	passwd = c;
	saveStudent();
	count++;
}

Student::~Student()
{
	count--;
}

int Student::saveStudent()
{
	ofstream saveFile(STUDENTFILE, ios_base::app | ios_base::binary);
	if (!saveFile.is_open())
	{
		cerr << "save file error" << endl;
		exit(1);
	}
	saveFile.write((char*)this, sizeof(Student));
	return 0;
}

int loadStudent()
{
	return 0;
}
