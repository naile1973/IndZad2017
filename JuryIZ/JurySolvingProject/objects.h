/*
�������� ������������ ���������� � �������������� ������������ ������ ������������ ������������
������� ��� ���
������ �������������� � ���������������� (2017-2018 ��.�., ������� �������)
�������������� ������� ��� ��. ����1-1, ����1-6, ����1-7 (02.03.03, 09.03.04)
(C) �.�. ��������
24.11.2017

������ ������ �� ���������� �� �������� ������������
*/

//----------------------------------------------------------------------
// ��� - ��������� ��� �������� ���������� �� ������� ������������
//----------------------------------------------------------------------
typedef struct {
	char Country[4];			// ������������ ������ - ������, ��������������� 0-������
	char ObjectName[31];		// ������������ ������� - ������, ��������������� 0-������
	short int Square;			// ������� ������� (������������� ����� �� ����� 100)
} ObjectType;
//----------------------------------------------------------------------


//----------------------------------------------------------------------
// ������ ���������� �� �������� ������������ �� ����� �� ���������� ���������
// filename - ������ � ������ ����� (� ��������� ��������)
//----------------------------------------------------------------------
int LoadObjects(const char *filename);


//----------------------------------------------------------------------
// ������ ���������� � ���������� �������� �� ���������� ���������
// ������������ �������� - ���-�� ��������
//----------------------------------------------------------------------
int GetNumObjects(void);



//----------------------------------------------------------------------
// ���������� �������� ������������ �� ������ � ����� �� ������������ �������
// (���������� �� ���������� ���������)
//----------------------------------------------------------------------
void SortObjects(void);


//----------------------------------------------------------------------
// ����� �������� �� ������������ ������ � ������������ �������
// country_name - ������� ������������ ������
// object_pattern - ������ ��� ����� �������
// found_objects - ������ �������� ��������� �������� �� ���������� ���������
// ������������ �������� - ���������� ��������� ��������
//----------------------------------------------------------------------
int FindObjects(char *country_name, char *object_pattern, int *found_objects_ind);



//----------------------------------------------------------------------
// ������ ���������� �� ������� �� ����������� ��������� �� �������
// obj_index - ������ �������
// obj_store - ��������� �� ���������, � ������� ���� �������� ��������� ����������
// ������������ �������� - ��� �� ��������� obj_store
//----------------------------------------------------------------------
ObjectType *GetObjects_ByIndex(int obj_index, ObjectType *obj_store);



