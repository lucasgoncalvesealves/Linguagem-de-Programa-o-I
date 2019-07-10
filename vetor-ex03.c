#include <stdio.h>
#define L 3
#define C 2

void preenche(int arr[L][C], int l, int c) {

	int i, j;

	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j++) {
			printf("Insira o numero: ");
			scanf_s("%d", &arr[i][j]);
		}
	}

}

float media(int arr[L][C], int l, int c) {

	float s = 0;
	int i, j;

	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j++) {
			s += arr[i][j];
		}
	}

	return s / (L * C);

}

int main(void) {

	int arr[L][C];
	int i, j;

	preenche(arr, L, C);

	for (i = 0; i < L; i++) {
		for (j = 0; j < C; j++) {
			printf("%d\n", arr[i][j]);
		}
	}

	printf("Media: %f", media(arr, L, C));

	return 0;

}