#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};						//s� coloque chaves neste estilo quando fizer o "molde"

void main (void) {

	struct Personagem p1;
	p1.forca = 10;
	p1.energia = 50;
	p1.experiencia = 30;	//nesta forma, usa-se ponto-e-v�rgula para fazer a "massa"

	struct Personagem p2 = { 18, 20, 25 }; //e nesta forma, usa-se chaves e v�rgula, mas n�o os nomes das vari�veis

	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
		p1.forca, p1.energia, p1.experiencia,
		p2.forca, p2.energia, p2.experiencia); //esta estrutura organiza as inst�ncias em colunas

}