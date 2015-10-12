#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
long int n=0,k=0,num=0;
int a=0;
cout << "Введите число:" << "\n";
cin >> num;
n=num;
while(n>0)
{
a=n%10;
k=(k+a)*10;
n=(n-a)/10;
}
k=k/10;
if (num==k)
{cout << "Симметрично" << "\n";
}
else
{
	cout << "Не симметрично" << "\n";
}
return 0;
}
	
