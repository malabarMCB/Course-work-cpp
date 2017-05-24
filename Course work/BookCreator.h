/*
*�������� ������ ��-51
*���������� ����� BookCreator 
*/
#pragma once
#include "Book.h"

//����������� ���� ��� ���������� ������(Factory Method)
class BookCreator 
{
	protected:
		string name;						//��'� �����
		string author;						//����� �����
		int pageCount;						//������� ������� � �����
		Publisher publisher;				//�������� �����
		string language;					//����, �� ��� �������� �����

		void FlushCin() const;				//����� ��� �������� cin
		void Initialize();					//����� ��� ���������� ����
	
	public:
		virtual ~BookCreator();				//����������

		virtual Book* Create()=0;			//����� ��� ��������� ���������� ����� �������� �� Book
};
