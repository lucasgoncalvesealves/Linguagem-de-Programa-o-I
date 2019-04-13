#include <stdio.h>

void preenche(int* v, int n) {
	int i;	
	for (i = 0 ; i <= n ; i++) {
		printf("Digite um valor: ");
		scanf("%d", (v + i));
	}
}

float media(int* v, int n) {
	int i;
	float m = 0;
	for (i = 0 ; i <= n ; i++) {
		m += *(v + i)/n+1;
	}
}

int main (void) {

	int vec[10];
	
	preenche(vec, 9);
	printf("Media: %f\n", media(vec, 9));

	return 0;
}

//inacabado!
