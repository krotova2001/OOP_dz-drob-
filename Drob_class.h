#pragma once
#include <iostream>

class Drob
{
	int chis;
	int znam;
public:
	Drob(int a, int b) : chis{ a }, znam{ b } // конструктор с параметрами и инициализацией
	{
		if (b == 0) znam = 1; // проверка деления на ноль
	}
	Drob():Drob(1,1){} // конструктор без параметров с делегированием на конструктор выше с параметрами по умолчанию
	void Show();

	Drob operator+(Drob a) // сложение
	{
		if (a.znam == znam) //если знаменатели дроби равны - просто складываем числительные
		{
			chis += a.chis;
		}
		else // если нет, приводим их к общему знаменателю
		{
			int znam_temp = znam; // возьмем "в уме" один знаменатель, так как на него неизмененного будем перемножать вторую дробь
			chis *= a.znam;
			znam *= a.znam;
			a.chis *= znam_temp;
			a.znam *= znam_temp;
			// и складываем числители
			chis += a.chis;
		}
		return *this; // возвратим эту же дробь
	}

	Drob operator-(Drob a) // вычитание
	{
		if (a.znam == znam) //если знаменатели дробей равны - просто вычитаем числительные
		{
			chis -= a.chis;
		}
		else // если нет, приводим их к общему знаменателю
		{
			int znam_temp = znam; // возьмем "в уме" один знаменатель, так как на него неизмененного будем перемножать вторую дробь
			chis *= a.znam;
			znam *= a.znam;
			a.chis *= znam_temp;
			a.znam *= znam_temp;
			// и вычитаем числители
			chis -= a.chis;
		}
		return *this;
	}

	Drob operator*(Drob a) // умножение
	{
		chis *= a.chis; // перемножаем числители
		znam *= a.znam; // и знаменатели
		return *this;
	}

	Drob operator/(Drob a) // деление
	{
		chis *= a.znam;
		znam *= a.chis;
		return *this;
	}

	//хоть в таком простом классе и нет динамической памяти, реализуем конструктор копирования
	Drob(const Drob& a):chis{ a.chis }, znam{ a.znam}{}

	// а теперь можно и перегрузить оператор =
	Drob operator=(Drob a)
	{
		chis = a.chis; 
		znam = a.znam;
		return *this;
	}
};
