#include <iostream>
#include <clocale>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

int main()
//Напишите игру в кости между человеком и компьютером. Они по очереди кидают по два кубика. Побеждает тот,у кого сумма больше. Кубики рисуйте псевдографикой
{  
	int a,b,c,rez1,rez2;
    setlocale(LC_ALL,"Russian");
    while (1>0){
    cout << "Для игры введите 1: ";
	cin>>a;
        if (a==1){
            b=rand()%6+1;
            c=rand()%6+1;
            cout<<"Ваш бросок"<<endl;
                switch (b) { //такой код потом видел еще у 2-х человек ((((
					case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			        case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			        case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			        case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			        case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			        case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
				cout << endl;
			     switch (c) {
			     case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			     case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			     case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			     case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			    case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			    case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
                rez1=b+c;
                cout<<"Ваш результат:  "<<rez1<<endl;
                b=rand()%6+1;
                c=rand()%6+1;
				switch (b) {
				case 1: cout<<"-----"<<endl<<cout<<"--o--"<<endl<<cout<<"-----"<<endl;break;
                case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			    case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			    case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			    case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			   case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
			   cout << endl;
                switch (c) {
			case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
                rez2=b+c;
                cout<<"Результат компьютера:"<<rez2<<endl;
                if (rez1>rez2){cout<<"Вы выиграли"<<endl;}
                if (rez1<rez2){cout<<"Вы проиграли"<<endl;}
                if (rez1==rez2){cout<<"Ничья"<<endl;}
         }
		}
    return 0;
}
