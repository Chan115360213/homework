#include <iostream>

int main() 
{
	int d, e;
	scanf_s("%d %d", &d, &e);
	if (d % e == 0)
	{
		printf("%d is a multiple of %d", d, e);
	}
}