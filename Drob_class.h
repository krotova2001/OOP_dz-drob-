#pragma once
class Drob
{
	int chis;
	int znam;
public:
	Drob(int a, int b) : chis{a}, znam{b} // ����������� � ����������� � ��������������
	{
		if (b == 0) znam = 1; // �������� ������� �� ����
		cout << "\nError 0 division\n";
	}
	void Show();
	
	
	/*
	� ��� ��������� ����� �����������
	void Plus(Drob a); // ��������. ��������� ������ ����� � ���������� � �����
	void Minus(Drob a); // ���������. ��������� ������ ����� � �������� �� �� ����
	void Umnozh(Drob a); // ���������. ��������� ������ ����� � �������� �� �� ����
	void Delenie(Drob a); //�������. ��������� ������ ����� � ������ ���� �� ���
	*/

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
		return 
	}


};

