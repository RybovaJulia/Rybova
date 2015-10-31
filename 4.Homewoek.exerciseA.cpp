#include <iostream>//быстрый алгоритм XORShift генерации псевдослучайных чисел с использованием XOR и битовыми сдвигами//
using std:: cout;
int XORShift(int x) {
	int tmp = 0;
	tmp ^= x << 21;
	tmp ^= tmp >> 35;
	x ^= tmp << 4;
	return x;
}
int main()
{
	return 0;
}