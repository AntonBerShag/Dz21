#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� x � y: ";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	cout << "������� �������������� x � y = " << (*px + *py) / 2 << "\n\n";

	return 0;
}