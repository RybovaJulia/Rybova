#include <iostream> /*задание B*/
#include <clocale>
using std::cin;
using std::cout;
using std::endl;
/*псевдорандомный генератор:*/ 
int xor_random(int x){ 
	int tmp = 0;
	tmp ^= x << 21;
	tmp ^= tmp >> 35;
	x ^= tmp << 4;
	return x;
}

/* инициализация массива (-50;50): */
int init_mas(int a[], const int N){ 
	for (int i = 0; i < N; i++){
		a[i] = xor_random(i % 2000) % 101 - 50;
		cout << i << ": " << a[i] << endl;
	}
	return 0;
}

/*вывод массива в обратном порядке:*/
int viv_obr_mas(int a[], const int N){ 
	for (int i = N - 1; i >= 0; i--){
		cout << i << ": " << a[i] << endl;
	}
	return 0;
}

/*вывод элементов нечётных позиций, затем чётных:*/
int vih_mas(int a[], const int N){ 
	for (int i = 0; i < N; i += 2){
		cout << i << ": " << a[i] << endl;
	}
	for (int i = 1; i < N; i += 2){
		cout << i << ": " << a[i] << endl;
	}
	return 0;
}

/*нахождение кол-ва положительных и отрицательных элементов массива:*/
int klvih_mas(int a[], const int N, int kl_pol, int kl_otr){ 
	for (int i = 0; i < N; i++){
		if (a[i] > 0)
		kl_pol++;
		else
		kl_otr++;
	}
	cout << "Количество положительных элементов массива=: " << kl_pol<< endl << "Количество отрицательных элементов массива=: " <<kl_otr << endl;
	return 0;
}

/*нахождение максимума и минимума, max и min использую в следующей функции:*/
int max_min_mas(int a[], const int N, int &max, int &min){ 
	max = a[0], min = a[0];
	for (int i = 0; i < N; i++){
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min)
			min = a[i];
	}
	return 0;
}

/*нахождение кол-ва максимальных и минимальных элементов, корректно работает с {2,3,4,4,4,5,5,2,5}:*/
int kl_maxmin_mas(int a[], const int N){ 
	int kl_max = 0, kl_min = 0, max = 0, min = 0;
	max_min_mas(a, N, max, min);
	for (int i = 0; i < N; i++){
		if (a[i] == max)
			kl_max++;
		else if (a[i] == min)
			kl_min++;
	}
	cout<<"Максимум в массиве A: "<<max<<endl;
    cout<<"Минимум в массиве A: "<<min<<endl;
	cout << "Количество максимальных элементов в массиве: " << kl_max << endl << "Количествово минимальных элементов в массиве=: " << kl_min << endl;
	return 0;
}

void perest_mas (int b[],int a[],int N)/*"Перестроить" массив следующим образом :заполнить вспомогательный массив В в котором положительные значения массива А переместить в начало В, отрицательные переместить в конец массива В*/
{
    int j=0;
    int k=N-1;
    for (int i=0;i<N;i++)
    {
        if (a[i]>=0){b[j]=a[i];j++;}
        else b[k]=a[i];k--;}
  }
void perest_mas1 (int a[],int N)/*аналогично предыдущей задаче "перестроить" массив А "на месте" (т.е. БЕЗ использования массива В) следующим образом положительные значения массива А переместить в начало А, отрицательные переместить в конец массива А*/
{   int p;
    int j=N;
    for (int i=0;i<N;i++)
    {
        if (a[i]<0)
        {
            for ( j=N;j>i;j--)
            {
                if (a[j]>=0)
                {
                    p=a[i];
                    a[i]=a[j];
                    a[j]=p;

                }
            }
        }
    }
}
int main(){
	setlocale(LC_ALL, "Russian");
	const int N=10000;
	int a[N], b[N];
	int max = 0, min = 0, kl_pol = 0, kl_otr = 0;
	init_mas(a, N);
	viv_obr_mas(b, N);
	vih_mas(a, N);
	klvih_mas(a, N, kl_pol, kl_otr);
	max_min_mas(a, N, max, min);
	kl_maxmin_mas(a, N);
    perest_mas(a, b, N);
	perest_mas1(a,N);
	return 0;
}