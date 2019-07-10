#include <stdio.h>

void main (void) {

	int vet[5];

	for (int j = 0; j < 5; j++) {
		printf("Informe um numero: ");
		scanf("%d", &vet[j]);
	};

	for (int j = 0; j < 5; j++) {
		printf("%d\n", vet[j]);
	};

	int I;
	printf("Escolha um destes numeros para ser removido: ");
	scanf("%d", &I);

	for (int j = 0; j < 5; j++) {
		if (vet[j] == I) {
			for (j = j; j < 5; j++) {
				vet[j] = vet[j+1];
			};
		};
	};
	vet[4] = 0;

	for (int j = 0; j < 5; j++) {
		printf("%d\n", vet[j]);
	};

}