#include <iostream>

int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("max = %d\n", a);
		if (b > c)
		{
			printf("min = %d", c);
		}
		else
		{
			printf("min = %d", b);
		}
	}
	else if (b > a && b > c)
	{
		printf("max = %d\n", b);
		if (a > c)
		{
			printf("min = %d", c);
		}
		else
		{
			printf("min = %d", a);
		}
	}
	else
	{
		printf("max = %d\n", c);
		if (a > b)
		{
			printf("min = %d", b);
		}
		else
		{
			printf("min = %d", a);
		}
	}
	return 0;
}