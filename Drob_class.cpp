#include "Drob_class.h"
#include <iostream>
using namespace std;

void Drob::Init_drob(int a, int b)
{
    chis = a;
    znam = b;
}

void Drob::Show()
{
    cout << chis << "/" << znam;
}

void Drob::Plus(Drob a)
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
}

void Drob::Minus(Drob a)
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
}

void Drob::Umnozh(Drob a)
{
    chis *= a.chis; // перемножаем числители
    znam *= a.znam; // и знаменатели
}

void Drob::Delenie(Drob a) // умножаем на обратную дробь
{
    chis *= a.znam;
    znam *= a.chis;
}





