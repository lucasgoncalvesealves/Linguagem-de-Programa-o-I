#include <stdio.h>

struct CorAditiva {
	int red;
	int green;
	int blue;
};

void preenche(struct CorAditiva* c) {

	printf("\nFavor informar valores entre 0 e 255.\n");
	printf("Informe a quantidade de vermelho: ");
	scanf_s("%d", &c->red);
	printf("Informe a quantidade de verde: ");
	scanf_s("%d", &c->green);
	printf("Informe a quantidade de azul: ");
	scanf_s("%d", &c->blue);

};

void main(void) {

	struct CorAditiva cor;
	preenche(&cor);
	printf("\nCODIGO CROMATICO\nR = %d\nG = %d\nB = %d\n", cor.red, cor.green, cor.blue);

}