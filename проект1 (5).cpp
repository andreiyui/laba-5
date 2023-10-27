#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number;
	cout << "Введите число ";
		cin >> number;

	int sum = 0;
	int product = 1;

	int digit;
	while (number != 0) {
		digit = number % 10;
		sum += digit;
		product *= digit;

		number /= 10;
	}
	cout << "сумма цифр " << sum << endl;
	cout << "Произведение цифр: " << product << endl;

	return 0;

}
	
		

