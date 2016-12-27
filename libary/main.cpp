#include "Book.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#define CHOISE_STAR 'A'
#define MENU_NUM 'E'
#define EXITLETTER 'E'


char choice(char a, char b);
void newBook();
void newStudent();

int main()
{
	ofstream a("C:\\Users\\Oak\\Desktop\\book.dat", ios::out);
	a.close();
	char menu_choise = 0;
	cout << "欢迎来到图书管理系统" << endl;
	cout << "正在进入系统，请等待" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << ".";
		_sleep(5 * 100);
	}

	do
	{
		system("cls");
		cout << std::left << setw(20) << "A.添加图书";
		cout << std::left << setw(20) << "B.查看图书";
		cout << std::left << setw(20) << "C.建立新同学" << endl;
		cout << std::left << setw(20) << "D.查看同学信息";
		cout << std::left << setw(20) << "E.退出" << endl;
		menu_choise = choice(CHOISE_STAR, MENU_NUM);
		switch (menu_choise)
		{
		case 'A': newBook();
			break;
		case 'B': loadBook();
			break;
		case 'C': newStudent();
			break;
		case 'D': loadStudent();
			break;
		default:
			break;
		}
	} while (menu_choise != MENU_NUM);
	/*Book * a = new Book("ads", 4654645, "adsfafasdf");
	a->loadBook();
	if (a == NULL)
		cout << "error" << endl;
	else {
		a->Next = a;
		cout << a->Next << endl;
	}*/
	return 0;
}

char choice(const char a, const char b)
{
	char ch = '0';
	cout << "请选择（  ）\b\b\b";
	cin >> ch;
	while ((ch <  a || ch > b) && (ch < (a + 32) || ch >(b + 32)))
	{
		cout << "您输入的选项不在选择范围，" << endl;
		cout << "请重新选择（  ）\b\b\b";
		cin >> ch;
	}
	if (ch > a)
	{
		ch = ch - 32;
	}
	return ch;
}

void newBook()
{
	string title;
	long int isbn;
	string press;
	int bookLanguege;
	system("cls");
	cout << "请输入图书名称：";
	cin >> title;
	cout << "请输入图书ISBN编号：";
	cin >> isbn;
	cout << "请输入出版社：";
	cin >> press;
	/*cout << "请输入正文语言：";
	cin >> bookLanguege;*/
	Book * a = new Book(title, isbn, press);
	a->~Book();
	delete a;
}

void newStudent()
{
	string name;
	string num;
	string passwd;
	cout << "请输入学生学号：";
	cin >> num;
	cout << "请输入学生姓名：";
	cin >> name;
	cout << "请输入借书密码：";
	cin >> passwd;
	Student * a = new Student(name, num, passwd);
}
