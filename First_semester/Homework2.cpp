//*Вводим целое число,проверить является ли оно симметричным *//
#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
long int n=0,k=0,num=0;
int a=0;
cout << "Ââåäèòå ÷èñëî:" << "\n";
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
{cout << "Ñèììåòðè÷íî" << "\n";
}
else
{
	cout << "Íå ñèììåòðè÷íî" << "\n";
}
return 0;
}
	
