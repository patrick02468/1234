#include <stdio.h>
#include <stdlib.h>

void example_1(int n, char A, char B, char C)
{
	if (n == 1) {
		printf("�L�l�q%c����%c\n", A, C);
	}
	else {
		example_1(n - 1, A, C, B);
		printf("�L�l�q%c����%c\n", A, C);
		example_1(n - 1, B, A, C);
	}

}
int main()
{
	int n;
	printf("�п�J�L�l��n:");
	scanf("%d", &n);
	example_1(n, 'A', 'B', 'C');
	return 0;
}