#include <stdio.h>

void preenche(int* xs, int n) {
	int i;
	for (i = 0 ; i < n ; i++) {
		printf("Digite um valor: ");
		scanf_s("%d", (xs + i));
	}
}

float media(int* xs, int n) {
	int i;
	float c = 0;
	float m = 0;
	for (i = 0 ; i < n ; i++) {
		c += *(xs + i);
	}
	m = c / n;
	return m;
}

int main (void) {

	int vec[100];
	int n;

	printf("Digite uma quantidade: ");
	scanf_s("%d", &n);

	preenche(vec, n);
	printf("Media: %f\n", media(vec, n));

	return 0;
}
