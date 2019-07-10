#include <stdio.h>

int eh_primo(n) {
	int divisores = 0;
	if (n <= 1) {
		return 2;
	};
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisores += 1;
		};
	};
	if (divisores == 2) {
		return 1;
	} else {
		return 0;
	};
};

void main(void) {

	int numero;
	printf("Digite um numero e descubra se ele e primo: ");
	scanf("%d", &numero);

	if (eh_primo(numero) == 1) {
		printf("Este numero e primo.\n");
	} else if (eh_primo(numero) == 0) {
		printf("Este numero nao e primo.\n");
	} else {
		printf("Este numero nao vale!\n");
	};

}