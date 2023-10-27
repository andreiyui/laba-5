#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int number;
	cout << "Введите число ";
	cin >> number;
	const int MAX_DIGITS = 1000;
	int digits[MAX_DIGITS];
	int count = 0;
	int tempNumber = number;

	while (tempNumber != 0) {
		digits[count] = tempNumber % 10;
		tempNumber /= 10;
		count++;
	}
	cout << "Количество цифр: " << count << endl;

	return 0;
}

