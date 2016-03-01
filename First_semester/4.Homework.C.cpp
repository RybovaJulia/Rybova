#include <iostream>
#include <clocale>
using std::cin;
using std::cout;
using std::endl;
/*псевдорандомный генератор*/
int xor_random(int x){ 
	int tmp = 0;
	tmp ^= x << 21;
	tmp ^= tmp >> 35;
	x ^= tmp << 4;
	return x;
}

/*инициализация массива (-50;50)*/
int init_mas(int a[], const int n){ 
	for (int i = 0; i < n; i++){
		a[i] = xor_random(i % 5648) % 100 - 50;
		cout << i << ": " << a[i] << endl;
	}
	return 0;
}

/*нахождение максимума и минимума, max и min использую в следующей функции*/
int maxmin_mas(int a[], const int n, int max, int min){ 
	min = a[0],max = a[0];
	for (int i = 0; i < n; i++){
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min)
			min = a[i];
	}
	return 0;
}

/*Вставляем после первого нулевого элемента массива число 999,после первого минимального элемента число 111, перед первым максимальным элементом число 222*/
int zamena(int a[], const int n){ 
	int max = 0, min = 0, j = 0,  c = 0, s = 0;
	maxmin_mas(a, n, max, min);
	for (int i = 0; i < n; i++){
		if (!j){
			if (a[i] == 0){
				a[i + 1] = 999;
				j++;
			}
		}
		if (!c){
			if (a[i] == min){
				a[i + 1] = 111;
				c++;
			}
		}
		if (!s){
			if (a[i] == max){
				a[i - 1] = 222;
				s++;
			}
		}
		if (j && c && s){
			break;
		}
	}
	for (int i = 0; i < n; i++){
		cout << i << ": " << a[i] << endl;
	}
	return 0;
}

int main(){
	setlocale(LC_ALL, "Russian");
	const int n = 30;
	int a[n];
	init_mas(a, n);
	zamena(a, n);
	return 0;
}