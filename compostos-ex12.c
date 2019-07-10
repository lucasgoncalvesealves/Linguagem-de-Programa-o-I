#include <stdio.h>
#include <string.h>

union Identidade {
    int cpf;
    int rg;
    char nome[256];
};

int main (void) {

    union Identidade i1;
    i1.cpf = 1234567890;
    
    union Identidade i2;
    i2.rg = 1234567890;
    
    union Identidade i3;
    strcpy(i3.nome, "Joãozinho");
    
    printf("%d %d %s\n", i1.rg, i2.cpf, i3.nome);
    
    return 0;

}
