#include <stdio.h>

int main (void) {
	
	int N = 0;
	int i = 0;
	int S = 0;

	printf("Digite um limite para o somatorio: ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++) {
		S += i*i;
	}

	printf("Soma: %d\n", S);
	return 0;

}