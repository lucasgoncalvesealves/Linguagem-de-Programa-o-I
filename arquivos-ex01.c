#include <stdio.h>
#include <string.h>

void main (void) {

    char string[25];
    printf("Escreva uma string de, no maximo, 25 caracteres: ");
    scanf("%s", string);
    
    FILE* f = fopen("arq-ex01.txt", "w");
    for (int i = 0 ; i <= strlen(string) ; i++) {
        fputc(string[i], f);
    };
    fclose(f);

}