#include <stdio.h>

int main() {

	struct Padding {
		char a;
		int b;
		double c;
	};
	struct Padding s1;

	printf("Size of struct: %ld\n", sizeof(s1));
	printf("Size of char a field: %ld\n", sizeof(s1.a));
	printf("Size of int b field: %ld\n", sizeof(s1.b));
	printf("Size of double c field: %ld\n", sizeof(s1.c));

	printf("Address of char a field: %p\n", &s1.a);
	printf("Address of int b field: %p\n", &s1.b);
	printf("Address of double c field: %p\n", &s1.c);

	return 0;
}
