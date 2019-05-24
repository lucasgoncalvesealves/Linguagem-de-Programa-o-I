#include <stdio.h>

struct Ponto {
	int x;
	int y;
};

void preencheponto(struct Ponto* pt) {
	printf("X = ");
	scanf_s("%d", &pt->x);
	printf("Y = ");
	scanf_s("%d", &pt->y);
};

struct Personagem {
	int identidade;
	int pontuacao;
	struct Ponto posicao;
};

void preencheperso(struct Personagem* ps) {
	printf("Identidade: ");
	scanf_s("%d", &ps->identidade);
	ps->identidade = 0;
};

void main(void) {

	struct Personagem elenco[10];

	for (int i = 0; i < 10; i++) {
		preencheperso(&elenco[i]);
		preencheponto(&elenco[i].posicao);
	};

}