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
    if (a.znam == znam) //���� ����������� ����� ����� - ������ ���������� ������������
    {
        chis += a.chis;
    }
    else // ���� ���, �������� �� � ������ �����������
    {
        int znam_temp = znam; // ������� "� ���" ���� �����������, ��� ��� �� ���� ������������� ����� ����������� ������ �����
        chis *= a.znam;
        znam *= a.znam;
        a.chis *= znam_temp;
        a.znam *= znam_temp;
        // � ���������� ���������
        chis += a.chis;
    }
}

void Drob::Minus(Drob a)
{
    if (a.znam == znam) //���� ����������� ������ ����� - ������ �������� ������������
    {
        chis -= a.chis;
    }
    else // ���� ���, �������� �� � ������ �����������
    {
        int znam_temp = znam; // ������� "� ���" ���� �����������, ��� ��� �� ���� ������������� ����� ����������� ������ �����
        chis *= a.znam;
        znam *= a.znam;
        a.chis *= znam_temp;
        a.znam *= znam_temp;
        // � �������� ���������
        chis -= a.chis;
    }
}

void Drob::Umnozh(Drob a)
{
    chis *= a.chis; // ����������� ���������
    znam *= a.znam; // � �����������
}

void Drob::Delenie(Drob a) // �������� �� �������� �����
{
    chis *= a.znam;
    znam *= a.chis;
}





