//------------------------�������� � �������� ������������ ������������ ����������. ��������� new, new[], delete, delete[].------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251");
	int* pa = new int; //������������� ���������� � ������������ ������
	int* pb = new int[5]; //������������� ������� � ������������ ������
	*pa = 10;
	cout << *pa << endl;
	cout << pa << endl;
	for (int i = 0; i < 5; i++)
	{
		pb[i] = i;
		cout << pb[i] << endl;
	}
	cout << pb << endl;
	
	delete pa; //������� ������ 1 ����������
	delete[] pb; //������� ������ ������ �������
	cout << pa << endl;
	cout << pb << endl;
	pa = nullptr; //������� ������
	pb = nullptr; //������� ������
	cout << pa << endl;
	cout << pb << endl;

	delete pa; //������ ������� => delete ������ �� �������
}

//------------------------�������� � �������� ������������ ������������ ����������. ��������� new, new[], delete, delete[].------------------------------

