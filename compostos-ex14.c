#include <stdio.h>

struct Preco {
	int unit;
	int conv;
	union {
		int real;
		int dolar;
		int euro;
	};
};

void exibe(struct Preco* p) {
	switch (p->unit) {
	case 1:
		printf("Preco em Real = %d\n", p->real);
		break;
	case 2:
		printf("Preco em Dolar = %d\n", p->dolar);
		break;
	case 3:
		printf("Preco em Euro = %d\n", p->euro);
		break;
	default:
		printf("ERRO!");
		break;
	};
};

void altera(struct Preco* p) {
	switch (p->conv) {
	case 1:
		p->real = p->dolar * 0.25;
		p->unit = 1;
		break;
	case 2:
		p->real = p->euro * 0.22;
		p->unit = 1;
		break;
	case 3:
		p->dolar = p->real * 4.1;
		p->unit = 2;
		break;
	case 4:
		p->dolar = p->euro * 0.9;
		p->unit = 2;
		break;
	case 5:
		p->euro = p->real * 4.58;
		p->unit = 3;
		break;
	case 6:
		p->euro = p->dolar * 1.12;
		p->unit = 3;
		break;
	default:
		printf("ERRO!");
		break;
	};
};

int main (void) {

	struct Preco p1;
	p1.real = 50;
	p1.unit = 1;
	exibe(&p1);

	printf("Selecione a moeda para conversao.");
	scanf_s("%d", &p1.conv);
	altera(&p1);

	exibe(&p1);

	return 0;

}