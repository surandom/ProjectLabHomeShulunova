#include <math.h>

#include "Main.h"
using namespace std;
int main() {
	SetConsoleTitle(L"Учебная программа по дисциплине \"Информатика и цифровые технологии\"");
	setlocale(LC_ALL, "rus");
	unsigned char ch = 0;
	do {
		system("cls");
		cout << "Меню программы\n";
		cout << "1 - Лабораторная работа 2.1\n";
		cout << "2 - Лабораторная работа 2.2\n";
		cout << "3 - Лабораторная работа 3\n";
		cout << "Esc - Для выхода из программы\n\n";
		ch = _getch();
		switch (ch) {
		case'1': Lab2_1(); break;
		case'2': Lab2_2(); break;
		case'3': Lab3(); break;
		case 27: break;
		}
		system("pause");
	} while (ch != 27);
	return 0;
}
void Info() {
	cout << "Шулунова Сурана группа 1бИВТн2 вариант 23\n";
}
int Lab2_1() {
	system("cls"); Info();
	 
	cout << "Программа выполнит следующие действия, для определения A, B, Z, y:\n";
	cout << "A = a^2 * b^2 / c;  B = c^3 - a * b;\n\n";
	cout << "      A^2 + B^2, если А = B, \n";
	cout << "y = {";
	cout << "        a^2 + c, если А != B, \n\n";
	cout << "      y^2(a - b),\n";
	cout << "Z = { 1\n";
	cout << "      y(c - ab),\n";

	double a, b, c;
	cout << "Введите a, b, c поочередно: \n" ;
	cin >> a;
	cin >> b;
	cin >> c;


	double A = pow(a, 2) * pow(b, 2) / c - pow(c, 2) / a * b;
	double B = pow(c, 3) - a * b;
	cout << "Получим A =" << A << endl;
	cout << "Получим B = " << B << endl;
	
	
	double y;
	if (A = B) {
		y = pow(A, 2) + pow(B, 2);
	}
	if (A != B) {
		y = pow(a, 3) + c;
	}
	cout << "Получим у = " << y << endl;


	double Z;
	if (y > 1.5) {
		Z = pow(y, 2)* (a - b);
	}
	if (y == 1.5) {
		Z = 1;
	}
	if (y < 1.5) {
		Z = y * (c - a * b);
	}
	cout << "Получим Z = " << Z << endl;
	cout << "Задание выполнено!";
	return 0;
}
int Lab2_2() {
	system("cls"); Info();

	cout << "Даны переменные а, b, с, d. Определить, являются ли они последовательными сторонами параллелограмма. Для каждого случая последовательности вывести соответствующее сообщение\n";

	double e, f, g, h;
	cout << "Введите переменные a, b, c, d поочередно\n";
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;

	if (e == g && f == h)
		cout << "Стороны являются последовательными сторонами параллелограмма\n";
	else
		cout << "Стороны НЕ являются последовательными сторонами параллелограмма\n";

	return 0;
}
int Lab3() {
	system("cls"); Info();

	cout << "Даны массивы m1, ..., m6 и a1, ..., a9\n";
	cout << "Построить новый массив P с элементами, определяемыми по формуле:\n\n";
	cout << "Pi = (a1 + a2 + ... + a9) - (m[i] - a1)^2\n\n";
	cout << "Определить Kp – количество элементов, находящихся\n";
	cout << "между наименьшим и наибольшим элементами массива P (строго между ними).\n";

	const int M = 6;
	const int A = 9;

	double m[M], a[A];

	// Ввод массивов
	cout << "Введите 6 элементов массива m:\n";
	for (int i = 0; i < M; i++) cin >> m[i];

	cout << "Введите 9 элементов массива a:\n";
	for (int j = 0; j < A; j++) cin >> a[j];

	// Сумма элементов массива a
	double sumA = 0;
	for (int j = 0; j < A; j++)
		sumA += a[j];

	// Формирование массива P
	double P[M];
	for (int i = 0; i < M; i++) {
		P[i] = sumA - pow(m[i] - a[0], 2);
	}

	// Поиск минимума и максимума массива P
	double minP = P[0], maxP = P[0];
	for (int i = 1; i < M; i++) {
		if (P[i] < minP) minP = P[i];
		if (P[i] > maxP) maxP = P[i];
	}

	// Подсчёт элементов между minP и maxP
	int Kp = 0;
	for (int i = 0; i < M; i++) {
		if (P[i] > minP && P[i] < maxP)
			Kp++;
	}

	// Вывод результата
	cout << "\nМассив P:\n";
	for (int i = 0; i < M; i++)
		cout << P[i] << " ";

	cout << "\n\nKp = " << Kp << endl;

	return 0;
}