#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, char* str) {

	for (int i = 0; i <= strlen(str); i++) {
		fputc(str[i], f);
	};

};

void main (void) {

	char string[25];
	printf("Escreva uma string de, no maximo, 25 caracteres: ");
	scanf("%s", string);

	char palavras[10][25];
	for (int i = 0; i < 10; i++) {
		printf("Escreva uma string de, no maximo, 25 caracteres: ");
		scanf("%s", palavras[i]);
	};

	FILE* f1 = fopen("arq-ex05a.txt", "w");
	escreva_string(f1, string);
	fclose(f1);

	FILE* f2 = fopen("arq-ex05b.txt", "w");
	for (int i = 0; i < 10; i++) {
		escreva_string(f2, palavras[i]);
	};
	fclose(f2);

}