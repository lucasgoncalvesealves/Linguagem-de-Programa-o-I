#include <stdio.h>
#include <string.h>

void main (void) {

    char leitura[25];

    FILE* f = fopen("/home/ime/arq-ex01.txt", "r");
    for (int i = 0 ; i <= strlen(leitura) ; i++) {
        leitura[i] = fgetc(f);
    };
    printf("%s\n", leitura);
    fclose(f);

}
