
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int start, end;
	int sum = 0;
	cout << "Введите начало диапазона:";
	cin >> start;
	cout << "Введите конец диапазона:";
	cin >> end;
	for (int i = start; i <= end; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << "Сумма всех четных чисел в заданном диапазоне:" << sum << endl;
	return 0;

}

