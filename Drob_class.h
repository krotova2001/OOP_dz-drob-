#pragma once
class Drob
{
	int chis;
	int znam;
public:
	void Init_drob(int a, int b);
	void Show();
	void Plus(Drob a); // сложение. Принимает вторую дробь и складывает с собой
	void Minus(Drob a); // вычитание. Принимает вторую дробь и вычитает ее из себя
	void Umnozh(Drob a); // умножение. Принимает вторую дробь и умножает ее на себя
	void Delenie(Drob a); //деление. Принимает вторую дробь и делеит себя на нее
};

