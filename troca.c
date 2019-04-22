#include <stdio.h>

void troca(int* p1, int* p2) {

	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
	
}

int main (void) {

	int x = 10;
	int y = 20;
	int* p1;
	int* p2;
	printf("Antes: %d %d\n", x, y);
	troca(&x, &y);
	printf("Depois: %d %d\n", x, y);

return 0;
}