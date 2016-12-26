#include "Book.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

#define CHOISE_STAR 'A'
#define MENU_NUM 'D'

char choice(char a, char b);
void newBook();

int main()
{
	ofstream a("C:\\Users\\Oak\\Desktop\\book.dat", ios::out);
	a.close();
	char menu_choise = 0;
	cout << "��ӭ����ͼ�����ϵͳ" << endl;
	cout << "���ڽ���ϵͳ����ȴ�" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << ".";
		_sleep(5 * 100);
	}

	do
	{
		system("cls");
		cout << std::left << setw(20) << "A.���ͼ��";
		cout << std::left << setw(20) << "B.�鿴ͼ��";
		cout << std::left << setw(20) << "C.¼��ѧ����Ϣ" << endl;
		cout << std::left << setw(20) << "D.�˳�" << endl;
		menu_choise = choice(CHOISE_STAR, MENU_NUM);
		switch (menu_choise)
		{
		case 'A': newBook();
			break;
		case 'B': loadBook();
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
	cout << "��ѡ��  ��\b\b\b";
	cin >> ch;
	while ((ch <  a || ch > b) && (ch < (a + 32) || ch >(b + 32)))
	{
		cout << "�������ѡ���ѡ��Χ��" << endl;
		cout << "������ѡ��  ��\b\b\b";
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
	cout << "������ͼ�����ƣ�";
	cin >> title;
	cout << "������ͼ��ISBN��ţ�";
	cin >> isbn;
	cout << "����������磺";
	cin >> press;
	/*cout << "�������������ԣ�";
	cin >> bookLanguege;*/
	Book * a = new Book(title, isbn, press);
	a->~Book();
	delete a;
}
