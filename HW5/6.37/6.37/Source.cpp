#include<stdlib.h>
#include<stdio.h>

int hello(int[], int y);

int main()
{
	int i, j, k, ans;
	int a[100];
	printf("��J�}�C���� ");
	scanf_s("%d", &i);

	printf("��J�}�C���e \n");
	for (j = 0; j < i; j++)
	{
		scanf_s("%d", &a[j]);
	}

	ans = hello(a, i);
	printf("�̤j��=%d\n", ans);

	system("pause");
	return 0;
}

int hello(int x[], int y)
{
	int max = 0, i;

	for (i = 0; i < y; i++)
	{
		if (x[i] > max)
			max = x[i];
	}
	return max;
}