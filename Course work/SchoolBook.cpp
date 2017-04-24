#include "SchoolBook.h"
#include "fstream"


SchoolBook::SchoolBook()
{

}

SchoolBook::SchoolBook(string name, string author, int pageCount,Publisher publisher,string language,string subject, int classNumber,bool hasAnswers)
		:Book(name,author,pageCount,publisher,language),
		subject(subject),classNumber(classNumber),hasAnswers(hasAnswers)
{

}

SchoolBook::~SchoolBook()
{

}

string SchoolBook::GetSubject() const
{
	return this->subject;
}

int SchoolBook::GetClassNumber() const
{
	return this->classNumber;
}

void SchoolBook::Show() const
{
	Book::Show();

	cout << "Subject: " << subject << "\n"
		<< "For " << classNumber << " class" << endl;
	cout << ((hasAnswers) ? "With answers" : "without answers")<<endl;
}

bool SchoolBook::HasAnswers() const
{
	return this->hasAnswers;
}

ostream& operator<<(ostream& oftStream, const SchoolBook& book)
{
	oftStream << book.GetName() << "\n"
		<< book.GetAutor() << "\n"
		<< book.GetPageCount() << "\n"
		<< book.GetPublishingCity() << "\n"
		<< book.GetPublishingCompanyName() << "\n"
		<< book.GetPublishingYear() << "\n"
		<< book.GetLanguage() << "\n"
		<< book.GetSubject() << "\n"
		<< book.GetClassNumber() << "\n"
		<< book.HasAnswers() << endl;

	return oftStream;
}

istream& operator >> (istream& in, SchoolBook& book)
{
	getline(in, book.name);
	getline(in, book.author);

	in >> book.pageCount;
	in.ignore();

	getline(in, book.publisher.city);
	getline(in, book.publisher.companyName);

	in >> book.publisher.year;
	in.ignore();

	getline(in, book.language);
	getline(in, book.subject);
	in >> book.classNumber;
	in >> book.hasAnswers;
	in.ignore();

	return in;
}

void SchoolBook::Serialize(ofstream* in) const
{
	*in <<"SchoolBook" << endl;
	*in << *this;
}

