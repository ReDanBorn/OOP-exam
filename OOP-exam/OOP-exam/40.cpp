//------------------------Создание и удаление динамической динамических переменных. Операторы new, new[], delete, delete[].------------------------------
#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251");
	int* pa = new int; //Инициализация переменной в динамической памяти
	int* pb = new int[5]; //Инициализация массива в динамической памяти
	*pa = 10;
	cout << *pa << endl;
	cout << pa << endl;
	for (int i = 0; i < 5; i++)
	{
		pb[i] = i;
		cout << pb[i] << endl;
	}
	cout << pb << endl;
	
	delete pa; //Затирка данных 1 переменной
	delete[] pb; //Затирка данных целого массива
	cout << pa << endl;
	cout << pb << endl;
	pa = nullptr; //Затирка адреса
	pb = nullptr; //Затирка адреса
	cout << pa << endl;
	cout << pb << endl;

	delete pa; //Нечего чистить => delete ничего не сделает
}

//------------------------Создание и удаление динамической динамических переменных. Операторы new, new[], delete, delete[].------------------------------

