  #include <iostream>
#include <clocale>
#include <stdlib.h>
using std::cout;
using std::cin;
int main()
{
setlocale(LC_ALL, "Russian");
long int a = 0,n1=0,s1=0,s2=0;
int k=0,i=0,kl=0;
cout << "Введите число:" << "\n";
cin >> a ;
	while (n1!=0)
	{
		kl=kl+1;
	    n1=n1/10;
	}
	if (kl%2==0)
			i==2;
		else
		i==1;
	while (a!= 0)
	{
		if (i%2==0)
		{
			s2=s2+a%10;
		}
		else   
		{
			s1=s1+a%10;		
		}
		a=a/10;
		i=i+1;
	}
	if (s1>=s2)
	{
		k=s1-s2;
	}
	else
	{
		k=s2-s1;
	}
	if  (k%11==0)
		cout<<"Число делится на 11\n";
	else 
		cout<<"Число не делится на 11\n";

	return 0;
}
