/*
*�������� ������ ��-51
*���������� ����� FictionBookCreator
*/
#pragma once
#include "BookCreator.h"
#include "FictionBook.h"

//����������� ���� ��� ���������� ������(Factory Method)
class FictionBookCreator : public BookCreator
{

	public:
		~FictionBookCreator();	//����������

		FictionBook* Create();	//����� ��� ��������� ���������� ���� FictionBook
};
