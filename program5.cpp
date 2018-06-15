#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Podaj trzy liczby: ";
    vector<int> numbers(3);
    cin >> numbers[0] >> numbers[1] >> numbers[2];

    for (auto& a : numbers)
        if (a)
            if (a > 0)
                cout << "Liczba " << a << " jest dodatnia.\n";
            else cout << "Liczba " << a << " jest ujemna.\n";
        else cout << "Liczba " << a << " jest równa 0.\n";
    return 0;
}
