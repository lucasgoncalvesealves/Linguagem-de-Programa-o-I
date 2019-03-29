#include <stdio.h>

int main (void) {

	int mph;

	printf("Informe a velocidade em mph: ");
	scanf("%d", &mph);

	if (mph*1.6 < 80) {
		printf("ACELERE");
	} else if (mph*1.6 > 100) {
		printf("DESACELERE");
	} else {
		printf("MANTENHA");
	}

	return 0;
}