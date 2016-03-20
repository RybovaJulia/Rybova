#define _CRT_SECURE_NO_WARNINGS  //35.В строке найти и вывести на экран все слова максимальной длины,  и удалить за ними следующее слово. 
#include <iostream> 
#include <stdio.h>
#include <cstring>
#include <clocale> 

using namespace std;
const int n=900;

char* vvod_string (char * str)
{
	int d=0; 
	cout<<"Выберите способ ввода строки:"<<endl<<"  1. Автоматически "<<endl<<"  2. Вручную "<<endl; 
	cin>>d; 
	switch(d){ 
	case 1: strcpy(str,"Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do:  once or twice she had peeped into the book her sister was reading");
		cout<<str<<endl; 
		break; 
	default:
		cout << "Введите строку" << "\n";
		cin.get();
		cin.getline(str, n);
	} 
	return str; 
} 


void max_lengh(char *str,int n)
{  
	char *p = new char[n];
	char *s = new char[n];
	strcpy(s, str);
	strcpy(p, str);
	char * pch = strtok(p, " ,.-;:"); 
	int maxlen = strlen(pch);
	while (pch != NULL) 
	{
		if (maxlen < strlen(pch))
			maxlen = strlen(pch);
		pch = strtok(NULL, " ,.-;:");
	}
	cout << "Максимальная длина слова="<<maxlen<<endl<<"Слова максимальной длины:"<<endl;
	char * pch1 = strtok(s, " ,.-;:");
	while (pch1 != NULL)
	{
		if (strlen(pch1)==maxlen)
			cout<<pch1<<endl;
		   pch1 = strtok(NULL, " ,.-;:");
	}
}


int main()
{
	setlocale(LC_ALL, "rus");
	char *str = new char[n];
	int i=0;
	vvod_string(str); 
	max_lengh(str,n);
	return 0;
}