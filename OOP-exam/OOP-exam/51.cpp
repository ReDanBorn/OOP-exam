// -------------------------------------------------------------����������� static
//#include <iostream>
//using namespace std;
//
//class Apple {
//
//public:
//
//	static int Count;
//
//	Apple(int weight, string color)
//	{
//		this->weight = weight;
//		this->color = color;
//		Count++;
//	}
//
//private:
//	int weight;
//	string color;
//};
//
//int Apple::Count = 0;
//
//int main()
//{
//	setlocale(LC_ALL, "RU-ru");
//
//	Apple apple(100, "Green");
//	Apple apple2(130, "Red");
//	Apple apple3(190, "Yellow");
//
//	cout << apple.Count << endl;
//	cout << apple2.Count << endl;
//	cout << apple3.Count << endl;
//	cout << Apple::Count << endl;
//}


// --------------------------------------����������� static + ID ��������� ����������!!! (����� ���������� ������������)
//#include <iostream>
//using namespace std;
//
//class Apple {
//
//public:
//
//	static int Count;
//
//	Apple(int weight, string color)
//	{
//		this->weight = weight;
//		this->color = color;
//		Count++;
//		id = Count;
//	}
//
//	int GetId()
//	{
//		return id;
//	}
//
//private:
//	int weight;
//	string color;
//	int id;
//};
//
//int Apple::Count = 0;
//
//int main()
//{
//	setlocale(LC_ALL, "RU-ru");
//
//	Apple apple(100, "Green");
//	Apple apple2(130, "Red");
//	Apple apple3(190, "Yellow");
//
//	cout << apple.Count << " | " << "id = " << apple.GetId() << endl;
//	cout << apple2.Count << " | " << "id = " << apple2.GetId() << endl;
//	cout << apple3.Count << " | " << "id = " << apple3.GetId() << endl;
//	cout << Apple::Count << endl;
//}


// -------------------------------------����������� static + ID ��������� + (��)����������� ������ � ������������
//#include <iostream>
//using namespace std;
//
//class Apple {
//
//public:
//
//	Apple(int weight, string color)
//	{
//		this->weight = weight;
//		this->color = color;
//		Count++;
//		id = Count;
//	}
//
//	int GetId()
//	{
//		return id;
//	}
//	static int GetCount()
//	{
//		return Count;
//	}
//
//private:
//	int weight;
//	string color;
//	int id;
//	static int Count;
//};
//
//int Apple::Count = 0;
//
//int main()
//{
//	setlocale(LC_ALL, "RU-ru");
//
//	Apple apple(100, "Green");
//	Apple apple2(130, "Red");
//	Apple apple3(190, "Yellow");
//
//	cout << apple.GetCount() << " | " << "id = " << apple.GetId() << endl;
//	cout << apple2.GetCount() << " | " << "id = " << apple2.GetId() << endl;
//	cout << apple3.GetCount() << " | " << "id = " << apple3.GetId() << endl;
//	cout << Apple::GetCount() << endl;
//}


// -------------------------------------����������� static + ID ��������� + (��)����������� ������ � ������������
#include <iostream>
using namespace std;

class Apple {

public:

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		Count++;
		id = Count;
	}

	int GetId()
	{
		return id;
	}
	string GetColor()
	{
		return color;
	}
	static int GetCount()
	{
		return Count;
	}
	//--------------------------------���/���------------------------------------------
	static void ChangetColor(Apple & fruit, string color) // ������� �������� �� ������(1-� ����������) (� �������: apple)
	{
		fruit.color = color;
	}

	void ChangetColorNoStatic(string color) // !��! ������� �������� �� ������
	{
		this->color = color;
	}
	//--------------------------------���/���------------------------------------------
private:
	int weight;
	string color;
	int id;
	static int Count;
};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "RU-ru");

	Apple apple(100, "Green");
	Apple apple2(100, "Black");
	cout << apple.GetColor() << " | " << "id = " << apple.GetId() << endl;
	cout << apple2.GetColor() << " | " << "id = " << apple.GetId() << endl;
	//-------------- ���/���
	apple.ChangetColor(apple, "Blue");
	//Apple::ChangetColor(apple, "Yellow");
	//-------------- ���/���


	//--------------����������� ����� ������ 1 �������
	apple2.ChangetColorNoStatic("White");
	//!������! Apple::ChangetColorNoStatic("Yellow"); !������!
	//
	cout << apple.GetColor() << " | " << "id = " << apple.GetId() << endl;
	cout << apple2.GetColor() << " | " << "id = " << apple.GetId() << endl;

}