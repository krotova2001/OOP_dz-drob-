#pragma once
class Drob
{
	int chis;
	int znam;
public:
	Drob(int a, int b) : chis{a}, znam{b} // конструктор с параметрами и инициализацией
	{
		if (b == 0) znam = 1; // проверка делени€ на ноль
		cout << "\nError 0 division\n";
	}
	void Show();
	
	
	/*
	а эти операторы можно перегрузить
	void Plus(Drob a); // сложение. ѕринимает вторую дробь и складывает с собой
	void Minus(Drob a); // вычитание. ѕринимает вторую дробь и вычитает ее из себ€
	void Umnozh(Drob a); // умножение. ѕринимает вторую дробь и умножает ее на себ€
	void Delenie(Drob a); //деление. ѕринимает вторую дробь и делеит себ€ на нее
	*/

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
		return 
	}


};

