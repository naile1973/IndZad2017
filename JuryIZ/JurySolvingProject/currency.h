/*
�������� ������������ ���������� � �������������� ������������ ������ ������������ ������������
������� ��� ���
������ �������������� � ���������������� (2017-2018 ��.�., ������� �������)
�������������� ������� ��� ��. ����1-1, ����1-6, ����1-7 (02.03.03, 09.03.04)
(C) �.�. ��������
24.11.2017

������ ������ �� ���������� � ������ �����
*/

#ifndef H_CURRENCY
#define H_CURRENCY

#include <time.h>

//----------------------------------------------------------------------
// ��� - ��������� ��� �������� ���������� � ����� �����
//----------------------------------------------------------------------
typedef struct {
	char Country[4];			// ������������ ������ - ������, ��������������� 0-������
	time_t StartTime;			// ����� ����� ������ ����� ������ � ���� ������ (����� �����)
	double Rate;				// ��������� ������� ������� ������ � ������
} CurrencyType;
//----------------------------------------------------------------------



//----------------------------------------------------------------------
// ������ ���������� � ������ ����� �� ����� �� ���������� ���������
// filename - ������ � ������ ����� (� ��������� ��������)
// ������������ �������� - ���������� ����������� �����
//----------------------------------------------------------------------
int LoadCurrency(const char *filename);


//----------------------------------------------------------------------
// ���������� ������ ����� �� ������ � ����� �� ���� ����� �����
// (���������� �� ���������� ���������)
//----------------------------------------------------------------------
void SortCurrency(void);


//----------------------------------------------------------------------
// ����� ����� ������ ��� ������ �� ����� ��������� ����
// country_name - ������� ������������ ������
// object_pattern - ������ ��� ����� �������
// found_objects - ������ �������� ��������� �������� �� ���������� ���������
// ������������ �������� - ���������� ��������� ��������
//----------------------------------------------------------------------
double FindRate(char *country_name, int year);

#endif
