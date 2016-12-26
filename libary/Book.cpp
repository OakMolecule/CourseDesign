#include "Book.h"
#include <fstream>
#include <iomanip>

#define BOOKFILE "C:\\Users\\Oak\\Desktop\\book.dat"


int Book::count = 0;

Book::Book()
{
	count++;
}

Book::Book(string temp_title, long int temp_ISBN, string temp_press)
{
	title = temp_title;
	press = temp_press;
	ISBN = temp_ISBN;
	isBorrow = 0;
	saveBook();
	count++;
}


Book::~Book()
{
	count--;
}

/************************************************************************/
/* �������ƣ�saveBook                                                   */
/* ��    ������                                                         */
/* ��    �ã��������飬�����ļ�                                         */
/* �� �� ֵ���ɹ���0������1                                           */
/************************************************************************/
int Book::saveBook()
{
	ofstream saveFile(BOOKFILE, ios_base::app | ios_base::binary);
	if (!saveFile.is_open())
	{
		cerr << "save file error" << endl;
		exit(1);
	}
	saveFile.write((char*)this, sizeof(Book));
	return 0;

	/*saveFile.write(title.c_str(), sizeof(title.c_str()));
	saveFile.write((char*)&ISBN, sizeof(int));
	saveFile.write(press.c_str(), sizeof(press.c_str()));
	saveFile.write((char*)&bookLanguage, sizeof(bookLanguage));
	saveFile.close();*/
}

void Book::infoBook()
{
	cout << std::left << setw(20) << title << setw(20) << ISBN << setw(20) << press << endl;
}

int loadBook()
{
	Book* a = new Book;
	Book* b;
	ifstream loadFile(BOOKFILE, ios_base::binary);
	if (!loadFile.is_open())
	{
		cerr << "load file error" << endl;
		exit(1);
	}

	cout << std::left << setw(20) << "����" << setw(20) << "INSB" << setw(20) << "������" << endl;
	while (!loadFile.eof())
	{
		/*b = a;
		if (a != nullptr)*/
			loadFile.read((char*)a, sizeof(Book));
		a->infoBook();
	}
	/*
	loadFile.read((char*)this, sizeof(Book));
	cout << title << endl;
	cout << ISBN << endl;
	cout << press << endl;
	cout << bookLanguage << endl;*/
	loadFile.close();
	getchar();
	getchar();
	a->~Book();
	delete a;
	return 0;
}
