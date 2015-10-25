// "Нормальный" калькулятор. Обработка ситуации деления на 0. Результат вычислений остается как текущее значение. При вводе 'e' -выход из программы.При вводе "c" происходит сброс всех значений .//
#include <iostream>
#include <clocale>
#include <cmath>
using std::cout;
using std::cin;
int main(){
	char oper =' ',k=' ';
	float rez=0,a=0,b=0;
	setlocale(LC_ALL, "Russian");
	cout <<"Для выхода введите операцию 'e'.Для сброса значений -'c'\n\n";
	cout << "Введите число: ";
	cin >> a;
	while (oper != '='){ 
			cout << "Введите операцию";
			cin >> oper;
		if ((oper != '=') && (oper != 'e') && (oper != 'c')){
			cout << "Введите число: ";
			cin >> b;
			k='1';
		}
		switch (oper){
		case '+': rez = a + b;
			break;
		case '-': rez = a - b;
			break;
		case '*': rez = a * b;
			break;
		case '/':
			if (b == 0)
				cout << "Делить на 0 нельзя\n";
			else
				rez = a / b;
			break;
		case 'c': rez = 0;
			cout << "Обнуление\n";
			cout << "Введите число: ";
			cin >> a;
			break;
		case '=':
			break;
		case 'e': exit(0);
		default:
			break;
		}
		 if ( (oper == '=') && (k==' ')) {
			 rez=a;}
	     if (oper != 'c'){
		  a = rez;
		}
	}
	cout << "Полученное значение=" << rez << "\n";
	return 0;
}