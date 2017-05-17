/*
*�������� ������ ��-51
*���������� ������ ����� FictionBookCreator
*/
#include "FictionBookCreator.h"
//-------------------------------------------------------------------------
//����������
FictionBookCreator::~FictionBookCreator()
{

}
//-------------------------------------------------------------------------
//����� ��� ��������� ���������� ���� FictionBook
FictionBook* FictionBookCreator::Create()
{
	Initialize();

	string genre;
	unsigned int chapterCount, volNumber;

	cout << "Enter genre: ";
	getline(cin, genre, '\n');

	cout << "Enter number of chapters: ";
	while (!(cin >> chapterCount) || cin.fail())
	{
		cout << "Please, enter correct data" << endl;
		FlushCin();
	}

	cout << "Enter number volume number: ";
	while (!(cin >> volNumber) || cin.fail())
	{
		cout << "Please, enter correct data" << endl;
		FlushCin();
	}

	return new FictionBook(name, author, pageCount, publisher, language, genre, chapterCount, volNumber);
}