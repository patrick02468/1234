#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y, i;
	printf("輸入兩個數 : ");
	scanf("%d %d", &x, &y);

	for (i = x; i > 0; i++)
		if (i%x == 0 && i%y == 0)
		{
			printf("%d %d 最小公因數為 %d\n", x, y, i);
			break;
		}
}
