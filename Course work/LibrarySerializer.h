/*
*�������� ������ ��-51
*���������� ����� LibrarySerializer
*/
#pragma once
#include "Libraryh.h"

// ���� LibrarySerializer, ���� ������� �� ���������� �������� Library
class LibrarySerializer
{
	public:
		~LibrarySerializer();									// ����������

		void Serialize(Library& library, string path) const;	// ����� ��� ���������� �������� 

		void Deserialize(Library* library, string path) const;	// ����� ��� ������������ �������� 
};
