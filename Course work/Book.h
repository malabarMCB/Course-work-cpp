/*
*�������� ������ ��-51
*���������� ����� Book
*/
#pragma once
#include "string"															// �������� ��� ������ � ������� 
#include "iostream"															// �������� ��� ������ � ��������
using namespace std;														// ������ ���� std

//���������, �� ����� ��������� �����
struct Publisher {
	string city;															//����, �� ���� ������ �����
	int year;																//��, ���� ���� ������ �����
	string companyName;														//��'� ���������� ������
};

//����������� ���� Book
class Book
{
	protected:
		string name;														//��'� �����
		string author;														//����� �����
		int pageCount;														//������� ������� � ����
		Publisher publisher;												//�������� �����
		string language;													//����, �� ��� �������� �����

	public:
		Book();																// ����������� �� �������������

		Book(string name, string author
			,int pageCount,Publisher publisher,string language);			// ����������� � �����������

		virtual ~Book();													// ����������

		string GetName() const;												// ����� ��� ��������� ��'� �����

		string GetAutor() const;											// ����� ��� ��������� ������ �����

		int GetPageCount() const;											// ����� ��� ��������� ������� ������� �����

		string GetPublishingCity() const;									// ����� ��� ��������� ����, �� ���� ������ �����

		int GetPublishingYear() const;										// ����� ��� ��������� ���� ������� �����

		string GetPublishingCompanyName() const;							// ����� ��� ��������� ��'� ������� ��������� �����

		string GetLanguage() const;											// ����� ��� ��������� ����, �� ��� �������� �����

		virtual void Show() const;											// ����� ��� ����������� ����� �� �������

		virtual void Serialize(ofstream* out) const = 0;					// ����� ��� ������ ����� � ����
};
