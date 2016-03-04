/*№41 Удалить отрицательные элементы массива А(N), а положительные отсортировать по возрастанию первой цифры.*/

#include <iostream> 
#include <ctime> 
using namespace std; 

int init_mas(int *A, int N){ 
	for (int i = 0; i < N; i++){ 
		*(A+i) = rand() % 50-5; // заполняем массив случайными числами 
	} 
	return 0; 
} 

int vyvod_mas(int *A, int N) 
{ 
	for (int i = 0; i < N; i++){ 
		cout << *(A+i)<< " "; 
	} 
	cout << endl; 
	return 0; 
} 
int delneg(int *A, int N)
{  
	for (int i=0; i<N; i++)
		if (A[i]<0) // Если найден отрицательный элемент, то
		{
			for (int j=i+1; j<N; j++) // сдвинуть все элементы, стоящие
				A[j-1]=A[j]; // после удаляемого на одну позицию
			N--; // Уменьшение размера массива
			i--; // Возврат к предыдущему индексу
		}
		cout << endl; 
		return N; 
}
int perv_cifr(int b)  /*функция нахождения первой цифры числа*/
{
	while(b>9)
	{
		b/=10;
	}
	return b;
}
int sort_mas(int *A, int N) // сортировка массива
{ 
 int temp = 0; // временная переменная для хранения элемента массива
 bool exit = false; // переменная для выхода из цикла, если массив отсортирован
 
 while (!exit) // пока массив не отсортирован
 {
  exit = true; 
  for (int i = 0; i < (N- 1); i++) // внутренний цикл
       if (perv_cifr(*(A + i))>perv_cifr(*(A + i+1))) // сравниваем два соседних элемента
    {
     // выполняем перестановку элементов массива
     temp = *(A+i); 
     *(A+i)= *(A+i+1);
     *(A+i+1) = temp;
     exit = false; 
    }
 }
 return 0;
}

int main() 
{ 
	setlocale(LC_ALL, "Russian"); 
	srand(time(NULL)); 
	int N = 0,b=0; 
	cout<< "Введите количество элементом массива " << endl; 
	cin>> N; 
	int *A = new int[N]; 
	cout<< endl; 
	init_mas(A, N); 
	vyvod_mas(A, N);
	int newsize=delneg(A, N);
	 if (newsize==N)
		cout<< "В массиве нет  отрицательных элементов " ;
	else
	{
		cout<< "Массив после удаления отрицательных элементов " << endl; 
		vyvod_mas(A,newsize);
		cout<<endl;
		sort_mas(A,newsize); 
   		cout<< "Отсортированный массив" << endl; 
		vyvod_mas(A,newsize);
	}
	cout<<endl;
	delete[] A;
	cout << endl; 
	return 0; 
}
