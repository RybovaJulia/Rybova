/*б) В программе объявлен массив А целых элементов (размер массива 10). Пользователь вводит массив c клавиатуры. Потом распечатываем массив. Вводим число N < 10. Затем удаляем N-ый элемент массива (сдвигая остальные элементы). */
#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;
// Удаляем N-й элемент из массива и сдвигаем остальные элементы
int init_mas(int A[], int const N){
	cout << "Введите элементы массива: "<<endl;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	return 1;
}

int vyvod_mas(int A[], int const N)
{
	for (int i = 0; i < N; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	return 1;
}

int delete_nm(int A[], int const N){
	int nm = 0;
	cout << "Введите номер элемента, который нужно удалить (0-9): ";
	cin >> nm;
	for (int i = nm; i < N-1; i++){
		A[i] = A[i + 1];
	}
    A[N - 1] = 0;
	cout<<endl;
	return 1;
}

int main(){
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int A[N] = { 0 };
	init_mas(A, N);
	vyvod_mas(A, N);
	delete_nm(A, N);
	vyvod_mas(A, N);
	cout << endl;
}