/*№53 Дан масив A(N).Удалить из массива все повторяющиеся нечетные числа.Вывести сообщение "Нет",если требуемых элементов нет. */
#include <iostream> 
#include <ctime> 
using namespace std; 

int generate_mas(int *A, int N)
{ 
	for (int i = 0; i < N; i++)
	{ 
		*(A+i) = rand() % 20; 
	} 
	return 0; 
} 

void vvod_mas (int *A,int N)
{ 
     for(int i=0;i<N;i++) 
       cin>>*(A+i); 
     cout<<endl; 
 } 

int vyvod_mas(int *A, int N) 
{ 
	for (int i = 0; i < N; i++)
	{ 
		cout << *(A+i)<< " "; 
	} 
	cout << endl; 
	return 0; 
} 

void init_mas(int *A,int N){ 
    int v=0; 
     cout<<"Выберите способ инициализации массива:"<<endl<<"  1. Случайными числами "<<endl<<"  2. С клавиатуры "<<endl; 
       cin>>v; 
     switch(v){ 
        case 1: generate_mas(A,N); 
            break; 
        case 2: vvod_mas(A,N); 
            break;
		default: vvod_mas(A,N); 
            break;
    } 
 } 

int arrayUnique(int *A, int N,int num) // функция, определяет повторяющиеся нечетные элементы массива 
{ 
	for (int i1 = 0; i1 < N; i1++) 
	{ 
		for (int i2 = i1 + 1; i2 < N; i2++) 
		{ 
			if ((*(A + i1) == *(A + i2)) && (*(A + i1) % 2))
			{ 
				for (int k = i2; k < N - 1; k++) 
				{ 
				     *(A+k) = *(A+k + 1); 
				} 
				N--; 
				if (*(A + i1) == *(A + i2)) 
				{ 
					i2--; 
				} 
			} 
		} 
	} 
	if (num==N)
		cout<< "В массиве нет повторяющихся нечетных элементов" <<endl;
	   else
	     {
		cout<< "Массив без повторяющихся нечетных элементов:" <<endl;
		vyvod_mas(A, N);
	    }
	return N; 
}



int main() 
{ 
	setlocale(LC_ALL, "Russian"); 
	srand(time(NULL)); 
	int N = 0, size = 0; 
	cout<< "Введите количество элементом массива " << endl; 
	cin>> N; 
	int num=N;
	int *A = new int[N]; 
	cout<< endl; 
	init_mas(A, N); 
	vyvod_mas(A, N);
	arrayUnique(A, N,num); 
	cout<<endl;
	delete[] A;
	return 0; 
} 



















































































































































































































































































































































































































































































































































































