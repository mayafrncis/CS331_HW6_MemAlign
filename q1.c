#include <stdio.h>

int main() {
	int intVar;
	char charVar;
	double doubleVar;
	short shortVar;
	printf("Variables declared.\n");
	printf("Size of int variable: %ld\n", sizeof(int));
	printf("Size of char variable: %ld\n", sizeof(char));
	printf("Size of double variable: %ld\n", sizeof(double));
	printf("Size of short variable: %ld\n", sizeof(short));

	printf("Address of int variable: %p\n", &intVar);
	printf("Address of char variable: %p\n", &charVar);
	printf("Address of double variable: %p\n", &doubleVar);
	printf("Address of short variable: %p\n", &shortVar);

	return 0;
}
