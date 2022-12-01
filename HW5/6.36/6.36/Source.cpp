#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i, j = 0;
	char input[1000];

	printf("Str:");
	gets(input, 1000);

	for (i = 0; i < 100; i++)
	{
		if (input[i] == ('\0'))
		{
			j = i - 1;
			break;
		}
	}

	while (j > (-1))
	{
		printf("%c", input[j]);
		j--;
	}

	printf("\n");

	system("pause");
	return 0;
}