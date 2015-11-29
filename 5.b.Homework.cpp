//b) В программе объявлен массив целых чисел фиксированной "емкости" N. //
//Пользователь вводит массив, затем пользователь вводит число, если такое число есть - то печатается его индекс, если такого числа нет об этом сообщается пользователю.// 
//При выполнении задания надо написать функцию, осуществляющую поиск в массиве. Она возвращает первый индекс, если таких чисел несколько, и -1 если такого числа нет.//
#include <iostream>  
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;
//Инициализация массива//
int init_mas(int mas[10], int const n)
{ srand(time(NULL));
	for (int i = 0; i < n; i++){
		mas[i] = rand() % 20 - 10;
		cout << mas[i] << " ";
	}
	cout << endl;
	return 0;
}

//функция поиска числа//
int find_num(int mas[],int n,int num)
{
	int k=0,mid=0,i=0;
	while ( (k<n) && (num!=mas[k]))
		k++;
	if  (k<n)
		return k;
	else
		return -1;
}
void main()
{
	setlocale(LC_ALL, "rus");
	const int n=10;
	int mas[n],num;
	init_mas(mas,n); 
	cout<<"Введите число для поиска"<<endl;
	cin>>num;
	int rez=find_num(mas,n,num);
	cout<<endl;
	if (rez==-1)
		cout<<"В данном массиве число "<<num<<" отсутствует"<<endl;
	else
		cout<<"Индекс числа= "<<rez+1<<endl;
}