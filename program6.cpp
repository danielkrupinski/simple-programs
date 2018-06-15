#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe: ";
    int number;
    cin >> number;
    !(number & 1) ? cout << "Liczba jest parzysta." : cout << "Liczba jest nieparzysta.";
    return 0;
}
