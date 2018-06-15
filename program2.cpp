#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Podaj trzy liczby: ";
    vector<int> numbers(3);
    cin >> numbers[0] >> numbers[1] >> numbers[2];
    cout << "Najmniejsza jest liczba " << *min_element(numbers.begin(), numbers.end()) << ".\n";
    return 0;
}
