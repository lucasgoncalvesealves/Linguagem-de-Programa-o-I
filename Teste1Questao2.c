#include <stdio.h>

int main (void) {

    int n1;
    int n2;
    int i;
    
    printf("Digite o numero inicial: ");
    scanf("%d", &n1);
    printf("Digite o numero final: ");
    scanf("%d", &n2);
    
    if (n1 > n2) {
        for (i = n1 ; i >= n2 ; i--) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
    } else if (n2 > n1) {
        for (i = n2 ; i >= n1 ; i--) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
    } else {
        printf ("Numeros iguais");
    }
    
    return 0;

}
