#pragma once
#include <iostream>
#include <string.h>
using namespace std;

int loadStudent();

class Student
{
public:
	Student();
	Student(string, string, string);
	~Student();
	int saveStudent();
	friend int loadStudent();
	static int count;		// ���ڼ�¼ѧ������
protected:
	
private:
	string name;
	string num;
	string passwd;
};
