#include <stdio.h>

int main (void) {

	char str[101];
	printf("Digite uma palavra: ");
	scanf("%s", str);

	printf("%s", str);
	printf(" tem %d", strlen(str));
	printf(" caracteres.");

	return 0;

}

//funciona, mas não é assim!