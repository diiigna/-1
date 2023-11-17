
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int num1, num2;
	cout << "Введите первое число:";
	cin >> num1;
	cout << "Введите второе число:";
	cin >> num2;

	int sredneearifm = (num1 + num2) / 2;
	cout << "Среднее арифметическое этих чисел:" << sredneearifm << endl;

	return 0;

}
