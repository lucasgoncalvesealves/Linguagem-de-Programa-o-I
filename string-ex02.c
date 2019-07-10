#include <stdio.h>

int tamanho(char* str) {

	int i = 0;
	int n = 0;
	while (str[i] != '\0') {
		n++;
		i++;
	}
	return n;
};

void concatena(char* d, char* o1, char* o2) {

	int to1 = tamanho(o1);
	int to2 = tamanho(o2);
	int j = 0; int k = 0;
	
	while (o1[j] != '\0') {
		d[j] = o1[j];
		j++;
	};
	while (o2[k] != '\0') {
		d[(k + to1)] = o2[k];
		k++;
	};
	d[to1 + to2] = '\0';

	printf("%s\n", o1);
	printf("%s\n", o2);
	printf("%s\n", d);

};

int main (void) {

	char origem1[100];
	char origem2[100];
	char destino[200];
	
	printf("Digite uma string: ");
	scanf("%s", origem1);
	printf("Digite outra string: ");
	scanf("%s", origem2);
	
	concatena(destino, origem1, origem2);

	return 0;
}