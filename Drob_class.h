#pragma once
class Drob
{
	int chis;
	int znam;
public:
	void Init_drob(int a, int b);
	void Show();
	void Plus(Drob a); // ��������. ��������� ������ ����� � ���������� � �����
	void Minus(Drob a); // ���������. ��������� ������ ����� � �������� �� �� ����
	void Umnozh(Drob a); // ���������. ��������� ������ ����� � �������� �� �� ����
	void Delenie(Drob a); //�������. ��������� ������ ����� � ������ ���� �� ���
};

