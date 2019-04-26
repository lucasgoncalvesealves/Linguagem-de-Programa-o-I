#include <stdio.h>

int main (void) {

	int a;
	int b;
	int* p;
	
	printf ("Digite A: ");
	scanf ("%d", &a);
	printf ("Digite B: ");
	scanf ("%d", &b);
	
	if (a > b) {
		p = &a;
		*p = *p - 50;
	} else if (b > a) {
		p = &b;
		*p = *p - 50;
	} else {
		printf("Números iguais!");
	}
	
	printf ("Novos valores: %d, %d\n", a, b);
	return 0;
	
}
