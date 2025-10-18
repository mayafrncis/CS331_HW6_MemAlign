#include <stdio.h>
#include <stddef.h>

int main() {
	struct unpacked {
		char a;
		int b;
		double c;
	};

	struct unpacked s1;

	printf("The following is for an unpacked struct\n");
	printf("Size of struct: %ld\n", sizeof(s1));
	printf("Size of char a field: %ld\n", sizeof(s1.a));
	printf("Size of int b field: %ld\n", sizeof(s1.b));
	printf("Size of double c field: %ld\n", sizeof(s1.c));

	printf("Address of char a field: %p\n", &s1.a);
	printf("Address of int b field: %p\n", &s1.b);
	printf("Address of double c field: %p\n\n", &s1.c);


	printf("The following applies to a packed struct\n");

	#pragma pack(1)
	struct packed {
		char a;
		int b;
		double c;
        };

        struct packed s2;

        printf("Size of struct: %ld\n", sizeof(s2));
        printf("Size of char a field: %ld\n", sizeof(s2.a));
        printf("Size of int b field: %ld\n", sizeof(s2.b));
        printf("Size of double c field: %ld\n", sizeof(s2.c));

        printf("Address of char a field: %p\n", &s2.a);
        printf("Address of int b field: %p\n", &s2.b);
        printf("Address of double c field: %p\n", &s2.c);
	return 0;
}
