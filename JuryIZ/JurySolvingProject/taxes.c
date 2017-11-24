#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "taxes.h"


// максимальное кол-во стран (по условию задачи)
#define cnMaxTaxes 20

// внутреннее хранилище стран-налогов - массив структур
TaxType Taxes[cnMaxTaxes];

// реальное кол-во стран/налогов
unsigned int NumTaxes = 0;


//----------------------------------------------------------------------
// Чтение информации о налогах из файла во внутреннюю стуктуру
//----------------------------------------------------------------------
int LoadTaxes(const char *filename)
{
	FILE *fin;
	unsigned int i;

	// файл не открыт
	if ((fin = fopen(filename, "rt")) == NULL)
		return 0;
	// первая строка - кол-во записей
	fscanf(fin, "%d", &NumTaxes);
	// читать все записи
	for (i = 0; i < NumTaxes; i++)
		fscanf(fin, "%s %d", Taxes[i].Country, &Taxes[i].Tax);
	// закрыть файл
	fclose(fin);
	return NumTaxes;
}
//----------------------------------------------------------------------


//----------------------------------------------------------------------
// Сортировка стран (во внутренней структуре).
//----------------------------------------------------------------------
void SortTaxes(void)
{
	///////////////////////////////////////////////////////////

	return;
}



//----------------------------------------------------------------------
// Поиск налога по названию страны
// Линейный поиск
//----------------------------------------------------------------------
int FindTax(char *country_name)
{
	int found_num = 0;
	unsigned int i;
	unsigned int len;

	// ищем запись для искомой страны
	i = 0;
	while ((i < NumTaxes) && (strcmp(country_name, Taxes[i].Country) != 0))
		i++;

	if (i == NumTaxes)	// нет такой страны - ошибка во входных данных (сюда зайти никогда не должны)
	{	
		printf("Error!!!!!! Not country %s in taxes.txt. Program has been terminated.\n", country_name);
	}

	return (Taxes[i].Tax);
}


