//Lab_03_1.cpp
//<Яцик Мар'ян>
//Лабораторна робота №3.1
//Розгалуження задане формулою: функція однієї змінної
//Варіант 0.25
#include<iostream>;
#include<cmath>;
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	double ctg{};
	double tg{};
	double arctg{};
	cout << "x="; cin >> x;
	A = 8, 1 + x * x * x;
	if (x < -3.5)
		B = (1.0 - 1.0 / (x * x * x * x * x));
	if (-3.5 <= x && x < 1)
		B = ctg*(1.0 / tg*(x + 1.0));
	if (x >= 1)
		B = arctg * (2.0 * x) - log(x / 2.0);
	y = A + B;
	cout << endl;
	cout << "1) y=" << y << endl;
	// другий спосіб розгалуження в повній формі
	if (x < -3.5)
		B = (1.0 - 1.0 / (x * x * x * x * x));
	else
		if (x >= 1)
			B = arctg * (2.0 * x) - log(x / 2.0);
		else
			B = ctg * (1.0 / tg * (x + 1.0));
	y = A + B;               
	cout << endl;
	cout << "2) y=" << y << endl;
	cin.get();
	return 0;

}