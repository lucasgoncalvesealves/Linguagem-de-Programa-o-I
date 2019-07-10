#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};						//só coloque chaves neste estilo quando fizer o "molde"

void preencheB(struct Personagem* p) {	//esta função aproveita o "molde" já criado acima, e apenas preenche-o
	scanf_s("%d", &p->forca);
	scanf_s("%d", &p->energia);
	scanf_s("%d", &p->experiencia);
}

void main(void) {

	struct Personagem* p;

	struct Personagem p1;
	preencheB(&p1);

	struct Personagem p2;
	preencheB(&p2);

	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
		p1.forca, p1.energia, p1.experiencia,
		p2.forca, p2.energia, p2.experiencia);

}