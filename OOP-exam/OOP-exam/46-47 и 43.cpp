//----------------------------------������ ������������------------------------------------------------
//#include <iostream>
//using namespace std;
//
//class Human
//{
//private:
//	string name = "���� ������";
//public:
//	string GetName()
//	{
//		return name;
//	}
//
//	void SetName(string name)
//	{
//		this->name = name;
//	}
//};
//
//class Student : public Human
//{
//public:
//	string group;
//	void Learn()
//	{
//		cout << "� �����!!!" << endl;
//	}
//};
//class ExtramuralStudent : public Student
//{
//public:
//	void Learn()
//	{
//		cout << "� ����� � ������������ ���� �������� ��������!" << endl;
//	}
//};
//
//class Professor : public Human
//{
//public:
//	string subject;
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "RU_ru");
//
//	Human h;
//
//	Student st;
//	st.SetName("��������");
//	st.Learn();
//	cout << st.GetName() << endl;
//
//	ExtramuralStudent extraSt;
//	extraSt.SetName("��������");
//	extraSt.Learn();
//	cout << extraSt.GetName() << endl;
//
//}
//----------------------------------������ ������������------------------------------------------------

//----------------------------C������������ ������� ��� ������������-----------------------------------

#include <iostream>
using namespace std;

class A
{
public:
	string msgOne = "��������� ����"; //�������� ����� (� � ������ ���������� � � ������� ������ ����������)

private:
	string msgTwo = "��������� ���"; //�������� ������ � ������ A !�� � ������� ������!
protected:
	string msgThree = "��������� ���"; //�������� ������ � ������ A � � ���������� ������ B !�� � �������� �������!
};

class B : public A
{
public:
	void PrintMsg()
	{
		cout << msgThree << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "RU_ru");
	B b;
	b.PrintMsg();

	b.msgOne;

	return 0;
}