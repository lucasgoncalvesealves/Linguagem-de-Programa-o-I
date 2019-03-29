#include <stdio.h>

int main (void) {

    int num;
    int soma = 0;
    
    printf("Escolha um numero: ");
    scanf("%d", &num);
    
    while (num > 0) {
        soma += num;
        num--;
    }
    
    printf("Somou %d\n", soma);
    return 0;

}
