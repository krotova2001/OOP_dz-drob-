#pragma once
#include <iostream>

class Drob
{
	int chis;
	int znam;
public:
	Drob(int a, int b) : chis{ a }, znam{ b } // ����������� � ����������� � ��������������
	{
		if (b == 0) znam = 1; // �������� ������� �� ����
	}
	Drob():Drob(1,1){} // ����������� ��� ���������� � �������������� �� ����������� ���� � ����������� �� ���������
	void Show();

	Drob operator+(Drob a) // ��������
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
		return *this; // ��������� ��� �� �����
	}

	Drob operator-(Drob a) // ���������
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
		return *this;
	}

	Drob operator*(Drob a) // ���������
	{
		chis *= a.chis; // ����������� ���������
		znam *= a.znam; // � �����������
		return *this;
	}

	Drob operator/(Drob a) // �������
	{
		chis *= a.znam;
		znam *= a.chis;
		return *this;
	}

	//���� � ����� ������� ������ � ��� ������������ ������, ��������� ����������� �����������
	Drob(const Drob& a):chis{ a.chis }, znam{ a.znam}{}

	// � ������ ����� � ����������� �������� =
	Drob operator=(Drob a)
	{
		chis = a.chis; 
		znam = a.znam;
		return *this;
	}
};
