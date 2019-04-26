#include <stdio.h>

int strlen2(char* str) {

	int i = 0;
	int n = 0;
	while (str[i] != '\0') {
		n++;
		i++;
	}
	return n;
}

int main (void) {

	char* str;	
	char palavra[101];
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("Esta palavra tem ");
	printf("%d", strlen2(palavra));
	printf(" caracteres.");

	return 0;

}
