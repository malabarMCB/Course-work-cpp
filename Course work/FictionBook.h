/*
*�������� ������ ��-51
*���������� ����� FictionBook
*/
#pragma once
#include "Book.h"															// ����������� ���� Book

// ���� FictionBook, ���� ��������� ���� Book
class FictionBook: public Book
{
	private:
		string genre;														// ���� �������� �����
		int chapterCount;													// ������� ���� � ������� ����
		int volNumber;														// ����� ���� �������� �����

	public:
		FictionBook();														// ����������� �� �������������

		FictionBook(string name, string author, 
			int pageCount, Publisher publisher,
			string language, string genre, 
			int chapterCount, int volNumber);								// ����������� � �����������

		~FictionBook();														// ����������

		string GetGenre() const;											// ����� ��� ��������� ����� �������� �����

		int GetChapterCount() const;										// ����� ��� ��������� ������� ���� �������� �����

		int GetVolNumber() const;											// ����� ��� ��������� ������ ���� �������� �����

		friend ostream& operator<<(ostream& out, const FictionBook& book);	// �������������� ������ � ����

		friend istream& operator>>(istream& in, FictionBook& book);			// �������������� ����� � ������

		void Show() const;													// ����� ��� ����������� ����� �� �������

		void Serialize(ofstream* out) const;								// ����� ��� ������ ����� � ����
};
