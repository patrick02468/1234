#include <stdio.h>
#include <stdlib.h>

void power(int a, int b)
{
	printf("%d", a);
	while (b > 1)
	{
		printf(" * %d", a);
		--b;
	}
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	power(a, b);
	system("pause");
	return 0;
}