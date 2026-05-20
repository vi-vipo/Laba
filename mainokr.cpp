#include<iostream>
#include<clocale>
using namespace std;

int main() {
	int radius, ugol;
	setlocale(LC_ALL, "ru");
	cout << "Введите радиус:";
	cin >> radius;
	cout << "Введите угол:";
	cin >> ugol;
	cout << "Площадь:" << 3.14 * radius * radius << endl;
	cout << "Площадь сектора:" << ugol * 3.14 * radius * radius / 360 << endl;
	cout << "Длина:" << 2 * 3.14 * radius << endl;
	
}
