#include <stdio.h>
#include <math.h>

void TriangleP(double a, double h);

int main()
{
	int x = 1;
	while (x<4) {
		printf("Hi there, we looking for P of %d triangle, you should give for us a and h\n",x);
		double a, h;
		scanf_s("%lf%lf", &a, &h);
		TriangleP(a, h);
		x++;
	}

}

void TriangleP(double a, double h) {
	double b = pow(a / 2, 2) + pow(h, 2);
	b = sqrt(b);
	//ривнобедренный значит b=c
	double P = a + b * 2;
	printf("P is equal to %lf\n", P);
}