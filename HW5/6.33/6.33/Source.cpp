#include<stdlib.h>
#include<stdio.h>

int binarysearch(int a[], int y);

int main()
{
	int number, ans;
	int a[] = { 0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40 };

	//printf("%d", sizeof(a) / sizeof(int));
	while (1)
	{
		printf("請輸入欲搜尋的資料 (-1結束) : ");
		scanf_s("%d", &number);

		if (number < 0)
			break;
		ans = binarysearch(a, number);

		if (ans < 0)
			printf("找不到 %d\n\n", number);
		else
			printf("第 %d 筆資料= %d\n\n", ans, number);
	}
	system("pause");
	return 0;
}

int binarysearch(int a[], int y)
{
	int high = 21, low = 0;


	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] == y)
			return mid + 1;
		else if (a[mid] > y)
			high = mid - 1;
		else if (a[mid] < y)
			low = mid + 1;
	}
	return -1;
}