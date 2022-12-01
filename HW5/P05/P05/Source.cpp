#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int *aPtr;
	a = 7;
	aPtr = &a;
	printf("The address of a is %p"
		"\nThe value of *Ptr is %p", &a, *aPtr);
	printf("\n\nThe Value of a is %p"
		"\nThe value of *Ptr is %p", a, *aPtr);
	printf("\n\nShowing that * and & are complements of "
		"each other\n&*aPtr = %p"
		"\n*&aPtr = %p\n", &*aPtr, *&aPtr);
	system("pause");
	return 0;
}