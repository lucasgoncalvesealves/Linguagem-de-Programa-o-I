#include <stdio.h>
#include <string.h>

void main (void) {

    char string[25];

    FILE* f = fopen("arq-ex01.txt", "r");
    for (int i = 0 ; i <= strlen(string) ; i++) {
        string[i] = fgetc(f);
    };
    printf("%s\n", string);
    fclose(f);

}