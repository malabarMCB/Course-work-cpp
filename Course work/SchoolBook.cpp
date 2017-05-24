/*
*�������� ������ ��-51
*���������� ������ ����� SchoolBook
*/
#include "SchoolBook.h"
#include "fstream" //�������� ��� ������ � �������
//-------------------------------------------------------------------------
// ����������� �� �������������
SchoolBook::SchoolBook()
{

}
//-------------------------------------------------------------------------
// ����������� � �����������
SchoolBook::SchoolBook(string name, string author, int pageCount,Publisher publisher
			,string language,string subject, int classNumber,bool hasAnswers)
		:Book(name,author,pageCount,publisher,language),
		subject(subject),classNumber(classNumber),hasAnswers(hasAnswers)
{

}
//-------------------------------------------------------------------------
// ����������
SchoolBook::~SchoolBook()
{

}
//-------------------------------------------------------------------------
// ����� ��� ��������� �������� � ����� ��������
string SchoolBook::GetSubject() const
{
	return this->subject;
}
//-------------------------------------------------------------------------
// ����� ��� ��������� ������ �����, ��� ����� ��������� ��������
int SchoolBook::GetClassNumber() const
{
	return this->classNumber;
}
//-------------------------------------------------------------------------
// ����� ��� ����������� ����� �� �������
void SchoolBook::Show() const
{
	Book::Show();

	cout << "Subject: " << subject << "\n"
		<< "For " << classNumber << " class" << endl;
	cout << ((hasAnswers) ? "With answers" : "without answers")<<endl;
}
//-------------------------------------------------------------------------
// ����� ��� ��������� ����������, � �� ���� �������� � ���������
bool SchoolBook::HasAnswers() const
{
	return this->hasAnswers;
}
//-------------------------------------------------------------------------
// �������������� ������ � ����
ostream& operator<<(ostream& out, const SchoolBook& book)
{
	out << book.GetName() << "\n"
		<< book.GetAutor() << "\n"
		<< book.GetPageCount() << "\n"
		<< book.GetPublishingCity() << "\n"
		<< book.GetPublishingCompanyName() << "\n"
		<< book.GetPublishingYear() << "\n"
		<< book.GetLanguage() << "\n"
		<< book.GetSubject() << "\n"
		<< book.GetClassNumber() << "\n"
		<< book.HasAnswers() << endl;

	return out;
}
//-------------------------------------------------------------------------
// �������������� ����� � ������
istream& operator >> (istream& in, SchoolBook& book)
{
	bool fail = false;

	getline(in, book.name);
	getline(in, book.author);

	in >> book.pageCount;
	in.ignore();
	if (in.fail() || book.pageCount<0) 
	{
		in.clear();
		fail = true;
	}


	getline(in, book.publisher.city);
	getline(in, book.publisher.companyName);

	in >> book.publisher.year;
	in.ignore();
	if (in.fail() || book.publisher.year<0)
	{
		in.clear();
		fail = true;
	}

	getline(in, book.language);
	getline(in, book.subject);
	in >> book.classNumber;
	if (in.fail() || book.classNumber<0)
	{
		in.clear();
		fail = true;
	}

	in >> book.hasAnswers;
	in.ignore();
	if (in.fail())
	{
		in.clear();
		fail = true;
	}

	if (fail)
		throw exception();

	return in;
}
//-------------------------------------------------------------------------
// ����� ��� ������ ����� � ����
void SchoolBook::Serialize(ofstream* out) const
{
	*out <<"SchoolBook" << endl;
	*out << *this;
}

