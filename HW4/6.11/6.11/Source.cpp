#include <stdio.h>
#define LEN 6
int main()
{
	int t;
	int i, j;
	int age[LEN] = { 11,12,10,15,1,2 };
	for (i = 0; i < LEN; i++) {
		for (j = 0; j < i; j++) {
			if (age[j] > age[i]) {
				t = age[j];
				age[j] = age[i];
				age[i] = t;

			}
		}
	}
	for (int j = 0; j < LEN; j++) {
		printf("%d ", age[j]);
	}
	return 0;
}