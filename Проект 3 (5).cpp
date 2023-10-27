#include <iostream>
using namespace std;
const int SIZE = 5;  
int main() {
    setlocale(0, "");
    int arr[SIZE] = { 1, 2, 3, 4, 5 };  
    int sum = 0;  

    
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    cout << "Сумма всех элементов массива: " << sum << endl;

    return 0;
}
