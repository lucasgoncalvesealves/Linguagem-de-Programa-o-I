#include <stdio.h>

struct CorSubtrativa {
	int cyan;
	int magenta;
	int yellow;
	int black;
};

struct CorAditiva {
	int red;
	int green;
	int blue;
};

union Cor {
	struct CorSubtrativa cs;
	struct CorAditiva ca;
};

enum Modo { CorSubtrativa, CorAditiva } qual;

void preenche(union Cor* c) {
	
	printf("\nQual o modo de cor?\n1 - Aditiva (para telas)\n0 - Subtrativa (para papel)\n");
	scanf_s("%d", &qual);

	switch (qual) {

	case 0:
		printf("\nFavor informar valores entre 0 e 100.\n");
		printf("Informe a quantidade de ciano: ");
		scanf_s("%d", &c->cs.cyan);
		printf("Informe a quantidade de magenta: ");
		scanf_s("%d", &c->cs.magenta);
		printf("Informe a quantidade de amarelo: ");
		scanf_s("%d", &c->cs.yellow);
		printf("Informe a quantidade de preto: ");
		scanf_s("%d", &c->cs.black);
		printf("\nCODIGO CROMATICO\nC = %d\nM = %d\nY = %d\nK = %d\n", c->cs.cyan, c->cs.magenta, c->cs.yellow, c->cs.black);
		break;

	case 1:
		printf("\nFavor informar valores entre 0 e 255.\n");
		printf("Informe a quantidade de vermelho: ");
		scanf_s("%d", &c->ca.red);
		printf("Informe a quantidade de verde: ");
		scanf_s("%d", &c->ca.green);
		printf("Informe a quantidade de azul: ");
		scanf_s("%d", &c->ca.blue);
		printf("\nCODIGO CROMATICO\nR = %d\nG = %d\nB = %d\n", c->ca.red, c->ca.green, c->ca.blue);
		break;

	default:
		printf("Numero errado!\n");
		break;

	}

};

void main(void) {

	union Cor cor;
	preenche(&cor);

}