#include <iostream>

int main() 
{
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			if (j == 0 || j == 8 || i == 0 || i == 8)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("      ");
		
		for (int j = 0; j < 9; j++)
		{
			if((j>=3 && j<=5)&&(i == 0 || i == 8) )
			{
				printf("*");
			}
			else if((j == 1 || j == 7)&&(i == 1 || i == 7))
			{
				printf("*");
			}
			else if((j == 0 || j == 8)&&(i>1 && i<7))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}	
		}
		printf("      ");

		for (int j = 0;j < 9;j++)
		{
			if (j == 4 && i == 0)
			{
				printf("*");
			}
			else if (j >= 3 && j <= 5 && i == 1)
			{
				printf("*");
			}
			else if (j >= 2 && j <= 6 && i == 2)
			{
				printf("*");
			}
			else if (j == 4 && i >= 3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("      ");

		for (int j = 0;j < 9;j++)
		{
			if ((j == 4 && (i == 0 || i == 8)))
			{
				printf("*");
			}
			else if ((j == 3 || j == 5)&&(i == 1 || i == 7))
			{
				printf("*");
			}
			else if ((j == 2 || j == 6) && (i == 2 || i == 6))
			{
				printf("*");
			}
			else if ((j == 1 || j == 7) && (i == 3 || i == 5))
			{
				printf("*");
			}
			else if ((j == 0 || j == 8) && i == 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

	