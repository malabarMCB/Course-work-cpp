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
	cin >> chapterCount;

	cout << "Enter number volume number: ";
	cin >> volNumber;

	return new FictionBook(name, author, pageCount, publisher, language, genre, chapterCount, volNumber);
}