#include <iostream>

using namespace std;

int main()
{
    int liczbaWierszy;

    // Pobranie warotści od użytkownika
    cout << "Podaj liczbe wierszy:";
    cin >> liczbaWierszy;

    // Wypisanie trójkątu
    for (int i = 0; i < liczbaWierszy; i++)
    {
        // Odstęp od lewej krawedzi consoli
        for (int j = 1; j < (liczbaWierszy - i); j++)
        {
            cout << "   ";
        }

        // odstęp pomiedzy elementami trójkąta i obliczanie jego elementów
        int liczbaPascala = 1;
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << liczbaPascala;
            liczbaPascala = liczbaPascala * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}