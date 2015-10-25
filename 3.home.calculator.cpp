// "Ќормальный" калькул€тор. ќбработка ситуации делени€ на 0. –езультат вычислений остаетс€ как текущее значение. ¬ыход по нажатию клавиши 'e'. лавиша ТcТ-сброс всех значений.//
#include <iostream>
#include <clocale>
#include <cmath>
using std::cout;
using std::cin;
int main(){
	char oper =' ',k=' ';
	float rez=0,a=0,b=0;
	setlocale(LC_ALL, "Russian");
	cout <<"ƒл€ выхода введите 'e',дл€ обнулени€ введите ТcТ\n\n";
	cout << "¬ведите число: ";
	cin >> a;
	while (oper != '='){ 
			cout << "¬ведите операцию";
			cin >> oper;
		if ((oper != '=') && (oper != 'e') && (oper != 'c')){
			cout << "¬ведите число: ";
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
				cout << "ƒелить на 0 нельз€\n";
			else
				rez = a / b;
			break;
		case 'c': rez = 0;
			cout << "ќбнуление\n";
			cout << "¬ведите число: ";
			cin >> a;
			break;
		case '=':
			break;
		case 'e': exit(0);
		default:
			break;
		}
		cout<<k;
		 if ( (oper == '=') && (k==' ')) {
			 rez=a;}
	     if (oper != 'c'){
		  a = rez;
		}
	}
	cout << "ѕолученное значение=" << rez << "\n";
	return 0;
}