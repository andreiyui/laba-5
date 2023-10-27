#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(0, "");
    int x1, x2;
    int a = 0, b = 0, c = 0, d = 0;
    cout << "Введите коэффициэнт :\n";
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d == 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        cout << "x : =" << x1 << endl;
    }
    else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 : =" << x1 << endl;
        cout << "x2 : =" << x2 << endl;
    }
    else if (d < 0) {
        cout << "корней нет" << endl;
    }
    else {
        cout << "i love Chief Keef";
    }

    return 0;
}