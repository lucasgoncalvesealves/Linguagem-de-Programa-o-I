#include <stdio.h>

struct Caixa {

	int valor;
	struct Caixa* prox;

};

void exibe(struct Caixa* caixa) {

	while (caixa != NULL) {
		printf("%d\n", caixa->valor);
		caixa = caixa->prox;
	};
	printf("\n");

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

	exibe(&c1);

	// a partir daqui, come�am as altera��es

	struct Caixa cabeca;
	cabeca.prox = &c1;

	c2.prox = &c4;

	exibe(&c1);

	cabeca.prox = &c3;
	c3.prox = &c1;

	exibe(&c3);

}