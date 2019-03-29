#include <stdio.h>

int main (void) {
	
	int n1;
	int n2;

	printf("Digite um numero: ");
	scanf_s("%d", &n1);
	printf("Digite outro numero: ");
	scanf_s("%d", &n2);

	if (n1 > n2) {
		printf("Maior numero: %d\n", n1);
	} else if (n2 > n1) {
		printf("Maior numero: %d\n", n2);
	} else {
		printf("Numeros iguais");
	}

	return 0;
}