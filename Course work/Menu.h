/*
*�������� ������ ��-51
*���������� ����� Menu
*/
#pragma once
#include "LibrarySerializer.h"

//����, �� ����� ����� ����
class Menu
{
	private:

		Library* library;				//�������� ���� ����

		LibrarySerializer* serializer;	//��'���, �� ������� ���������� �� ������������ ��������

		void CreateSchoolBook();		//����� ��� ��������� ��'���� ���� SchoolBook �� ��������� ���� �� ��������

		void CreateFictionBook();		//����� ��� ��������� ��'���� ���� FictionBook �� ��������� ���� �� ��������

		void ShowLibrary() const;		//����� ��� ��������� �������� �� �������

		void RemoveLibrary();			//����� ��� �������� ��������

		void WriteToFile() const;		//����� ��� ������ �������� � ����

		void ReadFormFile();			//����� ��� ���������� �������� � �����

		void SortBooks() const;			//����� ��� ���������� �������

		void MakeRequest() const;		//����� ��� ��������� ������ �� ��������

	public:
		Menu();							// ����������� �� �������������

		~Menu();						// ����������

		void Run();						// ����� ��� ������� ����
};
