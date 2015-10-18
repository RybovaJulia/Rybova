//*Вводим целое число.Найти сумму цифр этого числа до первого встречного нуля*//
 #include <iostream>
#include <clocale>
#include <stdlib.h>
using std::cout;
using std::cin;
int main()
{
setlocale(LC_ALL, "Russian");
long int a = 0, y=0,s=0;
cout << "Ââåäèòå ÷èñëî:" << "\n";
cin >> a ;
while (a % 10!= 0) {
y = a % 10;	
s = s+y;
a = a / 10;
    }
    cout << "Ñóììà öèôð äî íóëÿ ðàâíà: " << s ;
    return 0;
}
