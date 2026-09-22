#include <iostream>

int main() 
{
	printf("%-8s %-8s %s\n", "number", "square", "cube");
	int f, g, l = 0;
	for (int i = 1;i <= 10;i++)
	{
		f = i;
		g = i * i;
		l = i * i * i;
		printf("%-8d %-8d %-8d\n", f, g, l);
	}
}