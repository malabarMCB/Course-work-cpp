/*
*�������� ������ ��-51
*���������� ����� SchoolBookCreator
*/
#pragma once
#include "BookCreator.h"
#include "SchoolBook.h"

//����������� ���� ��� ���������� ������(Factory Method)
class SchoolBookCreator: public BookCreator
{
	public:
		~SchoolBookCreator();	//����������

		SchoolBook* Create();	//����� ��� ��������� ���������� ���� SchoolBook
};
