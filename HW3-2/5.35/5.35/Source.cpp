#include <stdio.h>
#include <stdlib.h>

int fibonacci(int i) {
	if (i == 0) {
		return 0;
	}
	if (i == 1) {
		return 1;
	}
	if (i >= 2) {
		return fibonacci(i - 2) + fibonacci(i - 1);
	}
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d", fibonacci(x - 1));
	return 0;
}