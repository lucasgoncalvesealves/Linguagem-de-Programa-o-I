#include <stdio.h>

struct Ponto {
	int x;
	int y;
};

void preencheponto(struct Ponto* p) {
	printf("X = ");
	scanf_s("%d", &p->x);
	printf("Y = ");
	scanf_s("%d", &p->y);
};

void main(void) {

	struct Ponto pontos[10];

	struct Ponto maior;
	maior.x = 0;
	maior.y = 0;

	int i;

	for (i = 0; i < 10; i++) {
		preencheponto(&pontos[i]);
	};

	for (i = 0; i < 10; i++) {
		if (pontos[i].x > maior.x || pontos[i].y > maior.y) {
			maior.x = pontos[i].x;
			maior.y = pontos[i].y;
		};
	};
	
	printf("\nPonto mais distante: (%d,%d)",maior.x, maior.y);

}