//#include <iostream>
//using namespace std;
//
//class Test;
//
//class Point
//{
//private:
//	int x;
//	int y;
//
//public:
//	Point()
//	{
//		x = 0;
//		y = 0;
//		cout << this << " constructor" << endl;
//	}
//	Point(int valueX, int valueY)
//	{
//		x = valueX;
//		y = valueY;
//		cout << this << " constructor" << endl;
//	}
//
//	bool operator ==(const Point& other)
//	{
//		return this->x == other.x && this->y == other.y;
//	}
//	bool operator !=(const Point& other)
//	{
//		return !(this->x == other.x && this->y == other.y);
//	}
//
//	Point operator +(const Point& other)
//	{
//		Point temp;
//		temp.x = this->x + other.x;
//		temp.y = this->y + other.y;
//		return temp;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//	//void SetX(int valueX)
//	//{
//	//	x = valueX;
//	//}
//	//void SetY(int valueY)
//	//{
//	//	y = valueY;
//	//}
//	void Print()
//	{
//		cout << "X = " << x << "\t Y = " << y << endl << endl;
//	}
//	Point& operator ++()
//	{
//		this->x++;
//		this->y += 1;
//
//		return *this;
//	}
//	Point& operator ++(int value)
//	{
//		Point temp(*this);
//		this->x++;
//		this->y++;
//
//		return temp;
//	}
//	Point& operator --()
//	{
//		this->x--;
//		this->y -= 1;
//
//		return *this;
//	}
//	Point& operator --(int value)
//	{
//		Point temp(*this);
//		this->x--;
//		this->y--;
//
//		return temp;
//	}
//
////--------------------------������������� ������� (������ � ����� � private)
//friend void ChangeX(Point& value,Test &testValue);
////--------------------------������������� ������� (������ � ����� � private)
//};
//
////------------------------------------------------------2-� ����� ��� �������
//class Test
//{
//private:
//	int Data = 0;
//	friend void ChangeX(Point& value, Test& testValue);
//public:
//	Test()
//	{
//		Data = 0;
//		cout << "Test constructor" << endl;
//	}
//	Test(int valueData)
//	{
//		Data = valueData;
//		cout << "Test constructor" << endl;
//	}
//	void Print()
//	{
//		cout << "Data = " << Data << endl;
//	}
//};
////------------------------------------------------------2-� ����� ��� �������
//
////-----------------------------------------------���������� �������, ������� ������ � 2-�� ��������
//void ChangeX(Point& value,Test & testValue)
//{
//	value.x = -1;
//	testValue.Data = -1;
//}
////-----------------------------------------------���������� �������, ������� ������ � 2-�� ��������
//
////----------------------�������� �������
///*void ChangeX(Point& value)
//{
//	value.x = -1;
//	//this->x = -1; ������!!! ������ ������������ THIS �� ��������� ������ (������������� ������� ��������� �� ��������� ������)
//}*/
////----------------------�������� �������
//
//int main()
//{
//	system("chcp 1251");
//	setlocale(LC_ALL, "RU-ru");
//
//	Test test(6);
//
//	Point a(5, 12);
//	a.Print();
//	ChangeX(a,test);
//	a.Print();
//	test.Print();
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Apple;

class Human
{
public:
	//��������� �� ����� (����� ��������� ��� �������� main())
	void TakeApple(Apple& apple);
	//��������� �� ����� (����� ��������� ��� �������� main())
	//� ����� ������ ��� ������� � private ����� ������ Apple
	void EatApple(Apple& apple)
	{

	}
	//� ����� ������ ��� ������� � private ����� ������ Apple
};

class Apple {

public:

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;

	}
private:
	int weight;
	string color;
	friend void Human::TakeApple(Apple& apple);
};

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "RU-ru");

	Apple apple(150, "Red");

	Human human;
	human.TakeApple(apple);
	
	return 0;
}

void Human::TakeApple(Apple& apple)
{
	cout << "TakeApple weight = " << apple.weight << " | color = " << apple.color << endl;
}