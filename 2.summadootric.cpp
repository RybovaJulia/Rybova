#include <iostream>//2)Программа считает сумму введенных чисел до первого отрицательного//
#include <clocale>
#include <cmath>
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a=0, sum=0 ;
	while (a>=0)
	{
		cout << "Введите число: ";
		cin >> a;
		if (a>0) sum=sum+a;;
	}
	cout << "Сумма положительных (точнее, НЕОТРИЦАТЕЛЬНЫХ) чисел= " <<sum<<"\n"; 
}
