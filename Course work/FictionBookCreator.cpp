#include "FictionBookCreator.h"

FictionBookCreator::~FictionBookCreator()
{

}

FictionBook FictionBookCreator::Create()
{
	Initialize();

	string genre;
	unsigned int chapterCount, volNumber;

	cout << "Enter genre";
	cin >> genre;

	cout << "Enter number of chapters";
	cin >> chapterCount;

	cout << "Enter number volume number";
	cin >> volNumber;

	return FictionBook(name, author, pageCount, publisher, language, genre, chapterCount, volNumber);
}