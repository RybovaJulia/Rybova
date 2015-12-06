/*в) В программе объявлен массив А элементов типа char (размер массива 20). Пользователь вводит массив c клавиатуры. Затем ищем в массиве какая буква встречается чаще всего. Ее выводим на экран.*/
#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
using namespace std;
int init_mas(char A[], int const N)
{	cout << "Введите 20 букв латинского алфавита через пробел: "<<endl;
	for (int i = 0; i <N; i++)
	{
		cin >> A[i];
	}
	return 1;
}
int vyvod_mas(char A[], int const N)
{cout<<"Введенный массив символов"<<endl;
for (int i = 0; i < N; i++){
		cout <<A[i] << " ";
	}
cout<<endl;
return 1;
}


int max_kol_char(char A[], int const N,int nMaxChar)
{
 int i,j,imax  = 0,nCount= 0;
   for(i = 0; i < N; i++)
    {
        nCount = 0;
        for(j = 0; j < N; j++)
        {
            if(A[i] == A[j])
                nCount++;
        }
        if(nMaxChar < nCount)
        {
            nMaxChar = nCount;
            imax = i;
        }
    }
       if(nMaxChar < 2)
        cout<<"Все элементы в массиве разные!"<<endl;
    else
        cout<<"Наиболее часто встречается буква "<<"'"<<A[imax]<<"'"<<" ("<<nMaxChar<<" раз"<<")"<<endl;
    return 1;
   }
int main()
{  setlocale(LC_ALL, "Russian");
	const int N=20;
	char A[N];
	int nMaxChar=0;
	int count_max=0;
	init_mas(A,N);
	vyvod_mas(A,N);
	max_kol_char(A,N,nMaxChar);
}
  
