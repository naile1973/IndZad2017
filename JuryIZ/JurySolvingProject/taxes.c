#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "taxes.h"


// ������������ ���-�� ����� (�� ������� ������)
#define cnMaxTaxes 20

// ���������� ��������� �����-������� - ������ ��������
TaxType Taxes[cnMaxTaxes];

// �������� ���-�� �����/�������
unsigned int NumTaxes = 0;


//----------------------------------------------------------------------
// ������ ���������� � ������� �� ����� �� ���������� ��������
//----------------------------------------------------------------------
int LoadTaxes(const char *filename)
{
	FILE *fin;
	unsigned int i;

	// ���� �� ������
	if ((fin = fopen(filename, "rt")) == NULL)
		return 0;
	// ������ ������ - ���-�� �������
	fscanf(fin, "%d", &NumTaxes);
	// ������ ��� ������
	for (i = 0; i < NumTaxes; i++)
		fscanf(fin, "%s %d", Taxes[i].Country, &Taxes[i].Tax);
	// ������� ����
	fclose(fin);
	return NumTaxes;
}
//----------------------------------------------------------------------


//----------------------------------------------------------------------
// ���������� ����� (�� ���������� ���������).
//----------------------------------------------------------------------
void SortTaxes(void)
{
	///////////////////////////////////////////////////////////

	return;
}



//----------------------------------------------------------------------
// ����� ������ �� �������� ������
// �������� �����
//----------------------------------------------------------------------
int FindTax(char *country_name)
{
	int found_num = 0;
	unsigned int i;
	unsigned int len;

	// ���� ������ ��� ������� ������
	i = 0;
	while ((i < NumTaxes) && (strcmp(country_name, Taxes[i].Country) != 0))
		i++;

	if (i == NumTaxes)	// ��� ����� ������ - ������ �� ������� ������ (���� ����� ������� �� ������)
	{	
		printf("Error!!!!!! Not country %s in taxes.txt. Program has been terminated.\n", country_name);
	}

	return (Taxes[i].Tax);
}


