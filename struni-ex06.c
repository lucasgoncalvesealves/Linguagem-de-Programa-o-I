#include <stdio.h>
#include <string.h>

struct MMA {
	char nome[11];
	char sobrenome[22];
	char categoria[11];
	char especialidade[11];
	int ranking;
	int vitorias;
	int derrotas;
};

void ficha(struct MMA* mma) {

	printf("Primeiro nome do lutador: ");
	scanf("%s", &mma->nome);
	printf("Sobrenome do lutador: ");
	scanf("%s", &mma->sobrenome);
	printf("Categoria de Peso: ");
	scanf("%s", &mma->categoria);
	printf("Especialista em: ");
	scanf("%s", &mma->especialidade);
	printf("Numero de vitorias: ");
	scanf_s("%d", &mma->vitorias);
	printf("Numero de derrotas: ");
	scanf_s("%d", &mma->derrotas);
	printf("Rankeado em qual posicao? ");
	scanf_s("%d", &mma->ranking);

	printf("\n");
	printf("%s %s\n", mma->nome, mma->sobrenome);
	printf("Peso %s\n", mma->categoria);
	if (mma->ranking == 0) {
		printf("Titular da categoria\n");
	}
	else {
		printf("Numero %d na categoria\n", mma->ranking);
	}
	printf("Especialista em %s\n", mma->especialidade);
	printf("%d vitorias\n", mma->vitorias);
	printf("%d derrotas\n", mma->derrotas);
	printf("\n");

};

void main(void) {

	struct MMA a1;
	ficha(&a1);

	struct MMA a2;
	ficha(&a2);

	struct MMA a3;
	ficha(&a3);

}