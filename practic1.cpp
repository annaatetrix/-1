// practic1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	{
		// task 1
		int a;
		short int b;
		long int c;
		float d;
		double e;
		long double f;
		char g;
		bool h;
		cout << "Количество байт, отведённое для типа данных int - " << sizeof(a) << "\n";
		cout << "Количество байт, отведённое для типа данных short int - " << sizeof(b) << "\n";
		cout << "Количество байт, отведённое для типа данных long int - " << sizeof(c) << "\n";
		cout << "Количество байт, отведённое для типа данных float - " << sizeof(d) << "\n";
		cout << "Количество байт, отведённое для типа данных double - " << sizeof(e) << "\n";
		cout << "Количество байт, отведённое для типа данных long double - " << sizeof(f) << "\n";
		cout << "Количество байт, отведённое для типа данных char - " << sizeof(g) << "\n";
		cout << "Количество байт, отведённое для типа данных bool - " << sizeof(h) << "\n";
		cout << "\n";
	}
	{
		// task 2
		unsigned mask = 1 << 15;
		int numb_i;
		cout << "Введите целое число, которое вы хотите представить в двоичном формате: ";
		cin >> numb_i;
		putchar(numb_i & mask ? '1' : '0');
		numb_i <<= 1;
		cout << " ";
		for (int i = 1; i <= 15; i++)
		{
			putchar(numb_i & mask ? '1' : '0');
			numb_i <<= 1;
		}
		cout << "\n";
	}


	
	{
	//task 2

	unsigned mask_f = 1 << 31;
	union {
		int tool;
		float numb_f;
	};
	cout << "\n";


	cout << "Введите число с плавающей точкой, которое вы хотите представить в двоичном формате: ";
	cin >> numb_f;
	putchar(tool & mask_f ? '1' : '0');
	tool <<= 1;
	cout << " ";
	for (int i = 0; i <= 7; i++)
	{
		putchar(tool & mask_f ? '1' : '0');
		tool <<= 1;
	}
	cout << " ";
	for (int i = 0; i <= 22; i++)
	{
		putchar(tool & mask_f ? '1' : '0');
		tool <<= 1;
	}

}




	return 0;

}

