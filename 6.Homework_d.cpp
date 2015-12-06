/*г) В программе объявлен массив А элементов типа char (размер массива 20). Пользователь вводит массив c клавиатуры. Затем заменяем последнюю встреченную в массиве букву Z на букву F.*/
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
	return 0;
}

int vyvod_mas(char A[], int const N)
{
for (int i = 0; i < N; i++)
{
		cout <<A[i] << " ";
	}
cout<<endl;
return 0;
}
int repl_letter(char A[], int const N)
{ 	for (int i = N-1; i >= 0; i--)
	{
	  if (A[i] == 'Z')
		{
			A[i] = 'F';
			break;
		}
	}
	cout<<"-----------------------"<<endl;
	if (i==N)
		cout<<"В массиве нет буквы Z"<<endl;
		else
		{
		  cout<<"Полученный массив символов после замены последней буквы Z на F"<<endl;
	      vyvod_mas(A, N);
	     }
	return 0;
}

int main(){
	setlocale(LC_ALL, "Russian");
	const int N = 20;
	char A[N];
	init_mas(A, N);
	cout<<"Введенный массив символов"<<endl;
	vyvod_mas(A, N);
	repl_letter(A, N);
}

