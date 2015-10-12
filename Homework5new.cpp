#include <iostream>
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int y = 1, i = 1, n = 0, x = 0;
	long float k = 1, e = 0;
	cout << "¬ведите x: ";
	cin >> x;
	while (k > 0.00001)
	{
		y = y*i;
		k = pow(x, n) / y;
		e = e + k;
		n++;
		i++;
	}
	cout << "—умма= " << e << "\n";
	return 0;
}