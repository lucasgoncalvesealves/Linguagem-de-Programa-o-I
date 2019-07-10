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

void todos_os_primos(max) {
	if (max <= 2) {
		printf("nenhum!\n");
	};
	for (int i = 1; i <= max; i++) {
		if (eh_primo(i) == 1) {
			printf("%d\n", i);
		};
	};
};

void main(void) {

	int numero;
	printf("Digite um numero e conheca os primos antes dele: ");
	scanf("%d", &numero);

	printf("Os numeros primos anteriores a %d sao:\n", numero);
	todos_os_primos(numero);

}