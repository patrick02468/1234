#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y, i;
	printf("��J��Ӽ� : ");
	scanf("%d %d", &x, &y);

	for (i = x; i > 0; i++)
		if (i%x == 0 && i%y == 0)
		{
			printf("%d %d �̤p���]�Ƭ� %d\n", x, y, i);
			break;
		}
}
