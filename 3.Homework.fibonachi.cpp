#include <iostream>//отношение соседних чисел Фибоначчи
#include <iomanip>
#include <clocale>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	float mas[40], a, b;
	int n;
	cout << "                                      Отношение                          " << endl;
	cout<<"\t--------------------------------------------------------------------------\n";
	cout<<"\t|      Последующее к предыдущему       |   Предыдущее к последующему      |\n";
	cout<<"\t -------------------------------------------------------------------------\n";
	cout<<"\t|                  1                   |                 2                |\n";
	cout<<"\t -------------------------------------------------------------------------\n";
	mas[0] = 1;
	mas[1] = 1;
	for (n = 2; n < 40; n++)
	{
		mas[n] = mas[n - 1] + mas[n - 2];
		a = mas[n] / mas[n - 1];
		b = mas[n - 1] / mas[n];
		cout << std::setw(30) << std::setprecision(7) << a;
		cout << std::setw(18) << "|";
		cout << std::setw(15) << std::fixed << std::setprecision(7) << " " << b << endl;
	}
	return 0;
}
