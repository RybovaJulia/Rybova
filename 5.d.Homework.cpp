//d) В программе объявлен массив А целых чисел (размер массива 100). 
//Пользователь вводит число реально используемой части массива (число N). Эта часть затем заполняется последовательно числами от 1 до N. 
//Затем пользователь вводит произвольное число и мы его помещаем в отсортированный А так, чтобы не нарушить порядок и изменяем значение N на единицу. 
//Затем пользователь вводит произвольное число и если оно есть в массиве (используйте ф-цию из задачи а)) то оно удаляется.
#include <iostream>
#include <iomanip>

using namespace std;
int init_mas(int mas[], int N)
{
	cout << "Последовательное заполнение массива, который содержит " << N << " элементов" << endl;
	int k = 1;
	for (int i = 0; i < N; i++)
	{
		mas[i]=k++;
	}
	return 0;
}

int vyvod(int mas[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << setw(3)<<mas[i];
	}
	cout << endl << endl;
	return 0;
}

int vvod_num(int mas[], int &N)
{
	int num = 0, i = 0;
	cout << "Введите число, которое хотите поместить в массив  ";
	cin >> num;
	N = N++;
	i = N-1;
	if (num <= 0)
	{
		while (i > 0)
		{
			mas[i] = mas[i - 1];
			i--;
		}
		mas[0] = num;
	}
	else if (num < mas[i-1])
	{
		mas[i] = mas[i - 1];
		i = N - 2;
		while (num < mas[i])
		{
			mas[i] = mas[i - 1];
			i--;
		}
		mas[i] = num;
	}
	else 
		mas[i] = num;
	return 0;
}

int find_num(int mas[], int N)
{
	int num = 0,i=0;
	cout << "Введите число, которое хотите удалить  ";
	cin >> num;
	while ( (i<N) && (num!=mas[i]))
	i++;
	if  (i>=N)
	cout<<"В данном массиве число "<<num<<" отсутствует"<<endl;
 if (i != N - 1)
	{
		for (i; i < N; i++)
		{
			mas[i] = mas[i + 1];
		}
		N--;
		vyvod(mas, N);
	}
	else
	{
		cout << "Введённое число отсутствует в массиве"<< endl;
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const n = 100;
	int mas[n],N=0;
	cout << "Введите количество элементом массива  " << endl;
	cin >> N;
	cout << endl;
	if (N <= 100)
	{
		init_mas(mas, N);
		vyvod(mas, N);
		vvod_num(mas, N);
		vyvod(mas, N);
		find_num(mas, N);
	}
	else
		cout << "К сожалению,Вы ввели число, превышающее размерность массива" << endl << endl;
	return 0;
}