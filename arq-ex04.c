#include <stdio.h>
#include <string.h>

void main (void) {

	char palavras[10][25];

	for (int i = 0; i < 10; i++) {
		printf("Escreva uma string de, no maximo, 25 caracteres: ");
		scanf("%s", palavras[i]);
	};

	FILE* f = fopen("arq-ex04.txt", "w");

	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= strlen(palavras[i]); j++) {
			fputc(palavras[i][j], f);
		};
	};
	
	fclose(f);

}