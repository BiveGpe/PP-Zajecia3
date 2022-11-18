#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b ,c;

    cout << "Rownanie kwadratowe: ax^2 + bx + c = 0" << endl;

    // Pobranie wartosci od uzytkownika
    cout << "Podaj a, b i c, z spacja pomiedzy:";
    cin >> a >> b >> c;
    cout << endl;
    cout << "Twoje rownanie: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    // Obliczanie delty
    int delta = (b * b) + (-4 * a * c);
    cout << "Delta: " << delta << endl;

    // Obliczenie pierwiastków
    if (delta < 0) {
        cout << "Brak pierwiastkow";
    }

    if (delta == 0) {
        cout << "Pierwiastek 1: " << -b/2*a;
    } else {
        cout << "Pierwiastek 1: " << (-b - sqrt(delta)) / (2 * a) << endl;
        cout << "Pierwiastek 2: " << (-b + sqrt(delta)) / (2 * a) << endl;
    }


    return 0;
}


