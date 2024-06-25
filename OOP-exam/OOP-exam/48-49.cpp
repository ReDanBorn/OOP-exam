#include <iostream>
#include <string>
using namespace std;

/*
* ����������� ������
* ����� ����������� �������
* virtual
* override
*/

class Weapon // ����������� ����� �.�. � �� ���� ������ ����������� �������
{
public:
	virtual void Shoot() = 0; //������ ����������� ������� (��� {...})

};

class Gun : public Weapon //����� ��������� ������ Weapon
{
public:
	void Shoot() override //����� ������ + �������� ����� override (�������� ����������� ������������ �� ������� �����������)
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun :public Gun //����� ��������� ������ Gun => ��������� � ������ Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka :public Weapon //����� ��������� ������ Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABUB!!!" << endl;
	}
};

class Knife :public Weapon //����� ��������� ������ Weapon
{
public:
	void Shoot() override
	{
		cout << "VJUH!!!" << endl;
	}

};

class Player //����� �����
{
public:
	void Shoot(Weapon* weapon) //����� Shoot, ����������� ��������� �� ������
	{
		weapon->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Gun gun; //�������� ������ ������ Gun (��������)

	SubmachineGun machinegun; //�������� ������ ������ SubmachineGun (��������-������)

	Bazooka bazooka; //�������� ������ ������ Bazooka (���������)

	Knife knife; //�������� ������ ������ Knife (���)

	Player player; //�������� ������ ������ �����
	player.Shoot(&knife); //������ ������ ������ � ���� ������� ��������� P.s. "&" - ��� ������ �� ����������� ������������ ������

	return 0;
}