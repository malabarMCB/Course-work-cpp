#include "SchoolBookCreator.h"

SchoolBookCreator::~SchoolBookCreator()
{

}

SchoolBook* SchoolBookCreator::Create()
{
	Initialize();

	string subject;
	unsigned int classNumber;
	bool hasAnswers;

	cout << "Enter subject: ";
	getline(cin, subject, '\n');

	cout << "Enter class number: ";
	cin >> classNumber;

	int answer;
	do
	{
		cout << "With answers? (no-0, yes-1): ";
		cin >> answer;
		switch (answer)
		{
			case 0:
				hasAnswers = false;
				break;
			case 1:
				hasAnswers = true;
				break;
			default:
				answer = 2;
				break;
		}
	} while (answer==2);

	return new SchoolBook(name, author, pageCount, publisher, language, subject, classNumber, hasAnswers);

}