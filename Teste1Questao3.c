#include <stdio.h>

int main (void) {

    char notas[50] = { 0 };
    char nota;
    float media;
    char acima;
    char i;
    
    for (i = 0 ; i <= 49 ; i++) {
        printf("Informe a nota: ");
        scanf("%hhd", &nota);
        if (nota >= 0 && nota <= 100) {
            notas[i] = nota;
            media += nota/50;
        } else {
            printf("Valor invalido! \n");
            i--;
        }
    }
        
    for (i = 0 ; i <= 49 ; i++) {
        if (notas[i] > media) {
            acima++;
        }
    }
        
    printf("Media da turma: %f\n", media);
    printf("Acima da media: %hhd\n", acima);
    
    return 0;

}
