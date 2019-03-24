#include <stdio.h>

int main (void) {

    float temp;
	float temps[50] = { 0 };
    float media = 0;
    char acima = 0;
    char i;

    for (i=0; i<=49; i++) {
        printf ("Digite uma temperatura entre -100 e 100: ");
        scanf_s ("%f", &temp);
        if (temp < 100 && temp > -100) {
            temps[i] = temp;
			media += temp / 50;
        } else {
            printf ("Numero invalido! \n");
			i--;
        }
    }

    for (i=0; i<=49; i++) {
        if (temps[i] > media) {
            acima++;
        }
    }

    printf ("Temperaturas acima da media: %d\n", acima);
    return 0;
}