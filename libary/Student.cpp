#include "Student.h"

int Student::count = 0;

Student::Student()
{
	count++;
}

Student::~Student()
{
	count--;
}
