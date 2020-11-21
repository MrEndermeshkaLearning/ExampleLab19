#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define SizeArr 100

//variant 5
void insertAbsSortArray(double arr[], int n);
void getRandomArray(double arr[], int size);
void printArray(double  arr[], int size);

int main() {
	double arr[SizeArr];
	getRandomArray(arr, SizeArr);
	printArray(arr, SizeArr);
	printf("It was array before sort\n");
	insertAbsSortArray(arr, SizeArr);
	printArray(arr, SizeArr);
	printf("It was array after Abs sorting");
}

void insertAbsSortArray(double arr[], int n) {
	for (int i = 1; i < n; i++) {
		int k = i;
		while (k > 0&& fabs(arr[k-1])>fabs(arr[k]))
		{
			double temp = arr[k - 1];
			arr[k - 1] = arr[k];
			arr[k] = temp;
			k--;
		}
	}
}
void getRandomArray(double arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (-size*100 - size*100) + -size*100;
		arr[i] /= (double)100;
	}
}


void printArray(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("arr[%d]=%lf\n", i, arr[i]);
	}
}