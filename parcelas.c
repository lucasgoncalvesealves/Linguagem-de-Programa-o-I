#include <stdio.h>

int main (void) {

	int parcela = -1;
	int soma = 0;

	while (parcela != 0) {
		printf("Digite uma parcela: ");
		scanf_s("%d", &parcela);
		soma += parcela;
	}

	printf("Soma: %d\n", soma);
	return 0;

}