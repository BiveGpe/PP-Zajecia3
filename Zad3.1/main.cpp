#include <iostream>

using namespace std;

int main() {
    // Pobranie x, y od użytkownika
    float x, y;

    cout << "Podaj x:";
    cin >> x;
    cout << "Podaj y:";
    cin >> y;


    // Działania na x, y
    cout << "Suma x + y: " << printf("%.1f",x + y) << endl;
    cout << "Roznica x - y: " << printf("%.1f",x - y) << endl;
    cout << "Iloczyn x * y: " << printf("%.1f",x * y) << endl;
    cout << "Iloraz x / y: " << printf("%.1f",x / y) << endl;
    /*
     * Wydaje mi się że powinno być %.2f, ale u mnie na kompie przy,
     * %.1f mam dwa miejsca po przecinku
     */


    return 0;
}
