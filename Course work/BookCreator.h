/*
*�������� ������ ��-51
*���������� ����� BookCreator 
*/
#pragma once
#include "Book.h"

//����������� ���� ��� ���������� ������(Factory Method)
class BookCreator 
{
	private:
		void FlushCinBuffer();			//����� ��� �������� ������ cin

	protected:
		string name;					//��'� �����
		string author;					//����� �����
		unsigned int pageCount;			//������� ������� � �����
		Publisher publisher;			//�������� �����
		string language;				//����, �� ��� �������� �����

		void Initialize();				//����� ��� ���������� ����
	
	public:
		~BookCreator();					//����������

		virtual Book* Create()=0;		//����� ��� ��������� ���������� ����� �������� �� Book
};
