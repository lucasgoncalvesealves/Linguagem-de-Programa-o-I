#include <stdio.h>

void preenche(int* xs, int n) {
	for (int i = 0; i < n; i++) {
		printf("Informe o numero: ");
		scanf("%d", (xs + i));
	};
};

float media(int* xs, int n) {
	float med = 0;
	for (int i = 0; i < n; i++) {
		med += *(xs + i);
	};
	return med / n;
};

void main(void) {

	int vec[100];
	int num;

	printf("Informe quantos numeros serao informados: ");
	scanf("%d", &num);

	preenche(vec, num);
	printf("%.2f", media(vec, num));

}