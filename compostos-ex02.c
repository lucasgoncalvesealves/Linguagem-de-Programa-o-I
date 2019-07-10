#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};						//só coloque chaves neste estilo quando fizer o "molde"

struct Personagem preencheA(void) {
	struct Personagem p;			//esta função traz um outro "molde" dentro, além do original acima
	scanf_s("%d", &p.forca);		//aqui utiliza-se o primeiro método de "massa" de struct
	scanf_s("%d", &p.energia);
	scanf_s("%d", &p.experiencia);
	return p;
};

void main (void) {

	struct Personagem p1 = preencheA();
	struct Personagem p2 = preencheA();

	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
		p1.forca, p1.energia, p1.experiencia,
		p2.forca, p2.energia, p2.experiencia); //esta estrutura organiza as instâncias em colunas

}