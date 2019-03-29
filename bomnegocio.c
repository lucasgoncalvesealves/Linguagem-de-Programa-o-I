#include <stdio.h>

int main (void) {

	float preco;

	printf("Digite o preco do celular em dolares: ");
	scanf_s("%f", &preco);

	if (preco*3.17 <= 1000) {
		printf("BOM NEGOCIO!");
	}

	return 0;
}