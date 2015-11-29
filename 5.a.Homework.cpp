//a)В массиве случайных целых чисел первый положительный элемент и последний отрицательный элемент переставить местами.//
// - все четные элементы заменить максимальным элементом, а нечетные — минимальным.//
//-найти максимальный из элементов, встречающихся только один раз.//
//- найти минимальное из чисел, встречающихся более одного раза//

#include <iostream>
#include <clocale>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
 using namespace std;

/*Инициализация массива  случайными данными */
int fillmas(int mas[],int n)
{
   srand(time(NULL));
   for (int i=0;i<n;i++)
    mas[i]=rand()%20-10;
    return 0;
 }

// вывод массива 
int vyvod_mas(int mas[], const int n)
{ 
	for (int i = 0; i <n; i++)
	cout<<setw(4)<<mas[i];
	cout<<endl;
	return 0;
}

// нахождение позиция первого отрицательного и положительного
int otr_pol(int mas[], const int n, int &ind_pol, int &ind_otr){ 
	int indp = 0, indot = 0;
	for (int i = 0; i < n; i++){
		if (mas[i] > 0){
			ind_pol = i;
			if (!indp) indp++;
		}
		else if (mas[i] < 0){
			if (!indot) {
				ind_otr = i;
				indot++;
			}
		}
		if (indp && indot) break;
	}
	 if (indot=0)
		cout<<"В массиве нет отрицательных чисел";
	else
		if (indp=0)
			cout<<"В массиве нет положительных чисел";
		else
     cout<<endl;
	 cout << "Позиция первого положительного= " << ind_pol + 1 << endl << "Позиция первого отрицательного= " << ind_otr + 1<<endl;
	return 0;
}

/* первый положительный элемент заменяем на последний отрицательный*/
int zamena(int mas[], int const n, int ind_pol, int ind_otr)
{ 
	mas[ind_pol] = mas[ind_pol] -mas[ind_otr]; 
	mas[ind_otr] = mas[ind_otr] + mas[ind_pol];
	mas[ind_pol] = -mas[ind_pol] + mas[ind_otr];
	cout<<endl<<"=========================== "<<endl;
	cout <<"Поменяли местами первый отрицательный элемент с первым положительным: " << endl;
	cout <<"Полученный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout<<endl;
	return 0;
}

// нахождение максимума :
int find_max(int mas[], int const n)
{ 
	int max = mas[0];
	for (int i = 0; i < n; i++)
		if (mas[i] > max)
		{
			max = mas[i];
	     }
		return max;
}

// нахождение минимума:
int find_min(int mas[], int const n)
{ 
	int min = mas[0];
	for (int i = 0; i < n; i++)
		if (mas[i] < min)
		{
			min = mas[i];
	     }
		return min;
} 
int change_chet_nechet(int mas[], int const n,int mas1[])
{ 
	int max = find_max(mas, n), min = find_min(mas, n);
	cout<<endl<<"=========================== "<< endl; 
	cout<<"Заменили чётные элементы на max, нечётные элементы - на min:" << endl;
	cout<<"Максимальный элемент массива= "<<max<<endl;
	cout<<"Минимальный элемент массива= "<<min<<endl;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2) mas1[i] = min;
		else mas1[i] = max;
		cout << mas1[i] << " ";
	}
	cout << endl;
	return 0;
}

// найти максимальный из элементов, встречающихся только один раз
int elem_max_min(int mas[], int const n){ 
	int max = mas[0], min = mas[0];
	cout<<endl<<"=========================== "<< endl;
	cout <<"Максимальные элементы, встречающиеся только один раз:" << endl;
	for (int i = 0; i < n; i++){
		int count = 0;
		for (int j = 0; j < n; j++){
			if (i != j){
				if (mas[i] ==mas[j]){
					count++;
					break;
				}
			}
		}
		if (!count) {
			if (mas[i] > max) max = mas[i];
			else if (mas[i] < min) min = mas[i];
			cout << mas[i] << " ";
		}
	}
	cout<<endl;
	cout << "Из них max= " << max << "; min= " << min << endl;
	return 0;
}

// максимальная длина последовательности равных элементов
int dl_posled(int mas[], int const n)
   { 
	int dl = 1, max_dl = 0;
	for (int i = 1; i < n; i++)
	{
		if (mas[i] == mas[i - 1])
		{
			dl++;
		}
		if (dl > max_dl) max_dl = dl;
		if (mas[i] != mas[i - 1])
		{
			dl = 1;
		}
	}
	cout << "Длина последовательных элементов массива mas1[]: " << max_dl << endl;
	cout<<endl<<"==========================="<< endl;
	cout<<endl;
	return 0;
}

/* инициализация і вывод двумерного массива*/
int init_mas(int mas2[10][10],int const n,int const m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mas2[i][j] = rand() % 10+1;
			cout <<setw(4)<<mas2[i][j];
		}
		cout << endl;
	}
	return 0;
}

/*Поиск седловой точки в матрице*/
int point(int mas2[10][10], int const n, int const m)
{
int min_str = mas2[0][0], max_col = mas2[0][0], col_i = 0, col_j = 0, str_i = 0, str_j = 0;
	for (int i = 1, j = 0; i < n; i++)
	{
		if (mas2[i][j] > mas2[i - 1][j])
		{
			max_col = mas2[i][j];
			col_i = i, col_j = j;
		}
	}
	for (int j = 1, i = 0; j < m; j++)
	{
		if (mas2[i][j] < mas2[i][j - 1])
		{
			min_str = mas2[i][j];
			str_i = i, str_j = j;
		}
	}
	if (col_i == str_i && col_j == str_j){
	cout<<endl<<cout<<"Седловая точка: [" << col_i << "][" << col_j << "]"<<endl;
	}
	else {
		cout<<endl;
		cout << "Седловых точек не найдено." << endl;
	}
	return 0;
}

/*Сумма элементов главной диагонали матрицы*/
int sum_el_diag(int mas2[10][10], int const n, int const m)
{
	int sm_dg=0;	 
	for (int i = 0; i < n; i++)
		sm_dg+= mas2[i][i];
	cout << "Сумма элементов главной диагонали матрицы= " << sm_dg << endl;
	return 0;
}
/*Cуммa элементов нижнего левого треугоника матрицы*/
int sum_el_treug(int mas2[10][10], int const n, int const m)
{ 
	int sm_tr = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sm_tr += mas2[i][j];
		}
	}
	cout << "Сумма элементов нижнего левого треугольника матрицы=" <<sm_tr << endl;
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10,m=10;
	int mas[n],mas1[n],mas2[n][m];
	int ind_pol=0,ind_otr=0;
	fillmas(mas, n);
	vyvod_mas(mas, n);
    otr_pol(mas,n,ind_pol,ind_otr);
	zamena(mas,n,ind_pol,ind_otr);
	change_chet_nechet(mas,n,mas1);
	elem_max_min(mas, n);
	dl_posled(mas, n);
	init_mas(mas2,n,m);
	point(mas2, n, m);
	sum_el_diag(mas2, n, m);
	sum_el_treug(mas2, n, m);
	return 0;
}
