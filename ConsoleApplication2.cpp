// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>


int main()
{
	using namespace std;
	double c = 0, d = 0, a = 0;
	setlocale(LC_ALL, "");
	cout << "Введите числа";
	cin >> c;
	cin >> d;
	cin >> a;
	cout << (2 * c +log10(d) * 51) / (d - a - 1);
	return 0;
}
