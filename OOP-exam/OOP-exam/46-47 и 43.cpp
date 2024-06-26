//----------------------------------Пример наследования------------------------------------------------
//#include <iostream>
//using namespace std;
//
//class Human
//{
//private:
//	string name = "Вася Пупкин";
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
//		cout << "Я учусь!!!" << endl;
//	}
//};
//class ExtramuralStudent : public Student
//{
//public:
//	void Learn()
//	{
//		cout << "Я бываю в университете реже обычного студента!" << endl;
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
//	st.SetName("Аристарх");
//	st.Learn();
//	cout << st.GetName() << endl;
//
//	ExtramuralStudent extraSt;
//	extraSt.SetName("Евлампий");
//	extraSt.Learn();
//	cout << extraSt.GetName() << endl;
//
//}
//----------------------------------Пример наследования------------------------------------------------

//----------------------------Cпецификаторы доступа при наследовании-----------------------------------

#include <iostream>
using namespace std;

class A
{
public:
	string msgOne = "Сообщение один"; //Доступно везде (И в классе наследнике и в объекте класса наследника)

private:
	string msgTwo = "Сообщение два"; //Доступно только в классе A !НЕ В ОБЪЕКТЕ КЛАССА!
protected:
	string msgThree = "Сообщение три"; //Доступно только в классе A и в наследнике класса B !НЕ В ОБЪЕКТАХ КЛАССОВ!
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