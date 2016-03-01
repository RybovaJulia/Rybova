#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
int main() {
	int a = 0, b = 0, i = 0;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите число: "<< "\n";
	cin >> a;
	while (a > 0) {
		b = a % 10;
		a = a / 10;
		cout << b;}
	return 0;
}
	
