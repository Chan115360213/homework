#include <iostream>

int main()
{
	float a, b, c ,f=0;
	int d, e;
	scanf_s("%f %f %f %d %d", &a, &b, &c, &d, &e);
	f = a / c * b + d + e;
	printf("%.2f", f);
}