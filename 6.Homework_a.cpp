/*a) Дописать программу, которая реализует стек целых чисел на массиве (функции push, pop и дополнительную функцию с именем view, которая печатает элемент, находящийся в вершине стека).
Внутри main выполнить по очереди следующие 14 действий:*/
#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
const int maxsize = 100;
int tmp = 0;

bool push(int A[], int &k, int num)
{
	A[k++] = num;
	if (k >= maxsize)
		return 0;
	else 
		return 1;
}

int pop(int A[], int &k)
{
	if (k == 0) return 0;
	else {
		tmp = A[k-1];
		A[k--] = 0;
		return A[k];
	}
}

int print_stek(int A[])
 {
	for (int i = maxsize-1; i >= 0; i--)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}

int view(int A[], int k){
	cout << "Вершина стека: " << A[k-1] << endl;
	return 0;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int A[maxsize]={0};
	int top = 0, num = 0;
	// FIFO и LIFO
	/*print_stek(A);*/
	for (int i = 0; i < 3; i++){
		cout << "Введите число, которое хотите поместить в стек ";
		cin >> num;
		push(A, top, num); // вставить введенное число в конец массива
	}
	view(A, top);
	cout << "Количество элементов в стеке: " << top << endl; 
	cout<< "Достаем элемент из стека..." << endl;
	pop(A, top);
	cout << "Количество элементов в стеке: " << top << endl;
	cout << "Достали элемент: " << tmp << endl << "_______" << endl;
	cout<< "Достаем элемент из стека..." << endl;
	pop(A, top);
	cout << "Количество элементов в стеке: " << top << endl; 
	cout << "Достали элемент: " << tmp << endl << "_______"<<endl ;
	cout<< "Достаем элемент из стека..." << endl;
	pop(A, top);
	cout << "Количество элементов в стеке: " << top << endl;
	cout << "Достали элемент: " << tmp << endl<< "_______"<<endl ;
	cout << "Попытка изъятия изъятия элемента из стека..." << endl;
	if (!pop(A, top)) {
		cout << "Внимание! Стек пуст!";
	}
	cout<<endl;
	cout << "Введите число, которое хотите поместить в стек: ";
	cin >> num;
	push(A, top, num);
	cout<<endl;
	cout << "Количество элементов в стеке= " << top << endl;
	print_stek(A);
	cout << endl;
}