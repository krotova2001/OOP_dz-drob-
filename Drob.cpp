#include "Drob_class.h" // подключаем класс
#include <iostream>
using namespace std;

int main()
{
	Drob A, B; // создадим сразу несколько дробей
	A.Init_drob(1, 2);
	B.Init_drob(1, 3);
	A.Plus(B); // сложение 1/2 и 1/3
	A.Show();

	cout << "\n";

	A.Init_drob(1, 2);
	B.Init_drob(1, 3);
	A.Minus(B); //  из 1/2 вычитанием 1/3
	A.Show();

	cout << "\n";

	A.Init_drob(1, 2);
	B.Init_drob(1, 3);
	A.Umnozh(B); //  умножаем 1/2 на 1/3
	A.Show();
	
	cout << "\n";

	A.Init_drob(1, 2);
	B.Init_drob(1, 2);
	A.Delenie(B); //  делим 1/2 на 1/2. Должно получиться 1
	A.Show();


}

