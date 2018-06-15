#include <iostream>

using namespace std;


int main()
{
    system("chcp 1250");
    system("cls");
    cout << "Podaj liczbę: ";
    int number;
    cin >> number;
    number % 2 == 0 ? cout << "Liczba jest parzysta." : cout << "Liczba jest nieparzysta.";
    cin.ignore();
    getchar();
    return 0;
}
