#include <iostream>
#include <string>
using namespace std;

/*
* Абстрактные классы
* Чисто виртуальные функции
* virtual
* override
*/

class Weapon // Абстрактный класс т.к. в нём есть чистая виртуальная функция
{
public:
	virtual void Shoot() = 0; //Чистая виртуальная функция (Без {...})

};

class Gun : public Weapon //Класс наследник класса Weapon
{
public:
	void Shoot() override //Метод класса + ключевое слово override (контроль корректного наследования со стороны компилятора)
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun :public Gun //Класс наследник класса Gun => наследник и класса Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka :public Weapon //Класс наследник класса Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABUB!!!" << endl;
	}
};

class Knife :public Weapon //Класс наследник класса Weapon
{
public:
	void Shoot() override
	{
		cout << "VJUH!!!" << endl;
	}

};

class Player //Класс игрок
{
public:
	void Shoot(Weapon* weapon) //Метод Shoot, принимающий указатель на оружие
	{
		weapon->Shoot();
	}
};

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "ru");

	Gun gun; //Объявили объект класса Gun (пистолет)

	SubmachineGun machinegun; //Объявили объект класса SubmachineGun (пистолет-пулемёт)

	Bazooka bazooka; //Объявили объект класса Bazooka (ракетница)

	Knife knife; //Объявили объект класса Knife (нож)

	Player player; //Объявили объект класса ИГРОК
	player.Shoot(&knife); //Выдали игроку оружие и дали команду атаковать P.s. "&" - это ссылка на обязательно существующий объект

	return 0;
}