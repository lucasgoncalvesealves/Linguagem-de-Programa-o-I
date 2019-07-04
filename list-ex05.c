#include <stdio.h>

struct Caixa {

	int valor;
	struct Caixa* prox;

};

struct Caixa* contem(struct Caixa* lista, int busca) {

	while (lista != NULL) {
		if (lista->valor == busca) {
			return lista;
		}
		lista = lista->prox;
	}
	return NULL;

};

struct Caixa* descarta(struct Caixa* lista, struct Caixa* busca) {

	struct Caixa c0;
	c0.valor = 0;
	c0.prox = lista;

	while (lista != NULL) {
		if (lista->valor == busca->valor) {
			lista->prox = lista->prox->prox;
		};
	};

	return lista;

};

void exibe(struct Caixa* caixa) {

	while (caixa != NULL) {
		printf("%d\n", caixa->valor);
		caixa = caixa->prox;
	};

};

void main (void) {

	struct Caixa c0, c1, c2, c3, c4, c5;

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
	printf("Informe o valor a ser removido: ");
	scanf("%d", &n);

	exibe(descarta(&c1, contem(&c1, n)));

}