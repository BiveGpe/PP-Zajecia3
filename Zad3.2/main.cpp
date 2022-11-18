#include <iostream>

using namespace std;

int main() {
    char userInput;

    do {
        cout << "Podaj Znak:";
        cin >> userInput;
        cout << userInput;

    } while (userInput != (char)'t');

    return 0;
}
