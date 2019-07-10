#include <stdio.h>

struct Caixa {

	int valor;
	struct Caixa* prox;

};

int contem(struct Caixa* lista, int busca) {

	while (lista != NULL) {
		if (lista->valor == busca) {
			return 1;
		}
		lista = lista->prox;
	}
	return 0;

};

void main (void) {

	struct Caixa c1, c2, c3, c4, c5;

	c1.valor = 1;
	c1.prox = &c2;

	c2.valor = 3;
	c2.prox = &c3;

	c3.valor = 9;
	c3.prox = &c4;

	c4.valor = 7;
	c4.prox = &c5;

	c5.valor = 5;
	c5.prox = NULL;

	int n;
	printf("Informe o valor a ser buscado: ");
	scanf("%d", &n);

	if (contem(&c1, n) == 1) {
		printf("Esta lista contem este valor.\n");
	}
	else {
		printf("Esta lista nao contem este valor.\n");
	}

}