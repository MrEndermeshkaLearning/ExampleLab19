#include <stdio.h>
// когда надо вернуть больше одного значение используем параметры ссылки на переменные
// ссылки указывают на область памяти как и масивы
// поэтому ничего возвращать также не нужно
// оно само вернёться в мейн

//Variant 6
void ShiftLeft3(int& a, int& b, int& c, int times);

int main() {
	int a = 10, b = 20, c = 140;
	ShiftLeft3(a, b, c, 2);
	printf("a=%d, b=%d, c=%d", a, b, c);
}

void ShiftLeft3(int& a, int& b, int& c, int times) {
	for (int i = 0; i < times; i++) {
		int temp = a;
		a = c;
		c = b;
		b = temp;
	}
}