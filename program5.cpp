#include <iostream>
#include <vector>

using namespace std;

void CheckNumber(const int& a)
{
	if (a != 0)
		if (a > 0)
			cout << "Liczba " << a << " jest dodatnia." << endl;
		else cout << "Liczba " << a << " jest ujemna." << endl;
	else cout << "Liczba " << a << " jest równa 0." << endl;
}

int main()
{
	system("chcp 1250");
	system("cls");
	cout << "Podaj trzy liczby: ";
	vector<int> numbers(3);
	cin >> numbers[0] >> numbers[1] >> numbers[2];
	CheckNumber(numbers[0]);
	CheckNumber(numbers[1]);
	CheckNumber(numbers[2]);
	cin.ignore();
	getchar();
	return 0;
}
