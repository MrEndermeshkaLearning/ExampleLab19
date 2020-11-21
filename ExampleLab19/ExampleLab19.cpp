#include<stdio.h>
//	вариант 7
void printAverengeOfListItem(int count);

int main() {
	int count;
	printf("Hi there, we need a count number is ready to input to program.\n=>");
	scanf_s("%d", &count);
	printAverengeOfListItem(count);
}

void printAverengeOfListItem(int count) {
	double temp = 0;
	double tempScan = 0;
	int tempCount = count;
	while (tempCount>0)
	{
		printf("left to enter:%d\n=>", tempCount);
		scanf_s("%lf", &tempScan);
		temp += tempScan;
		tempCount--;
	}
	printf("Averenge is equal to %lf", temp / (double)count);
}