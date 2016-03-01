#include <iostream>//1)Программа нахождения корней квадратного уравнения//
#include <iomanip>
#include <cmath>
#include <clocale>
using std::cout;
using std::cin;
int main() 
{
	setlocale(LC_ALL, "Russian");
	double a=0,b=0,c=0,D=0,x=0,x1=0, x2=0;
	cout <<"Решим квадратное уравнение: a*x*x+b*x+c=0. Введите коэффициент a: ";
	cin >>a;
	cout <<"Введите коэффициент b: ";
	cin >>b;
	cout <<"Введите коэффициент с: ";
	cin >>c;
	cout <<"a=" <<a <<" b=" <<b <<" c=" <<c <<"\n";
	D= b*b-4*a*c;
	cout <<"D=" <<D<<"\n";
	if (a==0 || b==0 || c==0 )
	{
		if (a == 0 && b!=0 && c!=0)
		{
			x = (-c) / b;
			cout << "x1=x2 = " << x << "\n";
		}
		if (c == 0 && a != 0 && b != 0)
		{
			x1 = 0;
			x2 = (-b) / a;
			cout <<"x1 = "<< x1 << "\n";
			cout << "x2 = " << x2 << "\n";
		}
		if (b == 0 && c != 0 && a != 0)
		{
			x1 = (-c) / a;
			x2 = -x1;
			cout <<"x1 = "<< x1 << "\n";
			cout << "x2 = " << x2 << "\n";
		}
		if (a == 0 && b == 0 && c==0)
		{
			cout << "x-любоe число" << "\n";
		}
		if (a == 0 && b == 0 && c != 0)
		{
			cout << "Уравнение не имеет корней" << "\n";
		}
		if ((a == 0 && c == 0 && b!=0) || (b == 0 && c == 0 && a!=0))
		{
			x = 0;
			cout << "x1=x2 = " << x << "\n";
		}
	} 
	else
		if ( D>0 ) 
		{
			x1= (-b+sqrt(D))/(2*a);
			x2= (-b-sqrt(D))/(2*a);
			cout <<"x1=" <<x1 <<" x2=" <<x2 <<"\n";
		} 
		else 
			if ( D == 0.0 )
			{
				x1= (-b/(2*a)); x2= x1;
				cout <<"x=" <<x1 <<"\n";
			}
			else 
			{
				cout <<"Уравнение не имеет ДЕЙСТРИТЕЛЬНЫХ корней"<<"\n";
				// а как же комплексные числа??????? Мы же не в 7 классе...
			}
}
