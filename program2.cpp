#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	system("chcp 1250");
	system("cls");
	cout << "Podaj trzy liczby: ";
	vector<int> numbers(3);
	cin >> numbers[0] >> numbers[1] >> numbers[2];
	sort(numbers.begin(), numbers.end());
	cout << "Najmniejsza jest liczba " << numbers[0];
	cin.ignore();
	getchar();
	return 0;
}