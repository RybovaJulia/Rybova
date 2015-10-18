#include <iostream>//3)Программа нахождения максимальной цифры числа и ее позиции//
#include <clocale>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i=1,num = 0, max = 0, ind = 0, cnt = 1,n1=0,n2=0,b=0;	cout << "Введите число: ";
	cin >> num;
	max=num%10;
	n2=num;
	while (num%10!=0)
	{
		b=num%10;
		if (b>max) 
		{
			max = b;
			ind=cnt;
		}
		num=num/10;
		cnt++;
	}
	cout << "Максимальная цифра числа: " << max << "\n" ;
	cout  << "Позиция максимальной цифры : " ;
	while (n2>0)
	{
            b=n2%10;
                if(b==max)
					{cout<< i <<"  ";}
					i++;
            n2=n2/10;
	}
return 0;
}
