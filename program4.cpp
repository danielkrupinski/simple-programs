#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Podaj trzy liczby: ";
    vector<int> numbers(3);
    cin >> numbers[0] >> numbers[1] >> numbers[2];
    sort(numbers.begin(), numbers.end());
    cout << "Podane liczby w kolejnosci malejącej: " << endl;
    cout << numbers[2] << '\n' << numbers[1] << '\n' << numbers[0] << '\n';
    return 0;
}
