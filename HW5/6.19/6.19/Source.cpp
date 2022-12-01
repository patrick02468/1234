#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a[6][6], i, j, x, y;
	printf("   ");
	for (i = 0; i < 6; i++)
	{
		printf("%2d ", i + 1);
	}
	for (i = 0; i < 6; i++)
	{
		printf("\n %d ", i + 1);
		for (j = 0; j < 6; j++)
		{
			x = rand() % 6;
			y = rand() % 6;
			while (x == 0)
			{
				x = rand() % 6;
			}
			while (y == 0)
			{
				y = rand() % 6;
			}
			a[i][j] = x + y;
			printf("%2d ", a[i][j]);
		}
	}
	system("pause");
	return 0;
}