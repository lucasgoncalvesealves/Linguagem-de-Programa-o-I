#include <stdio.h>

void compra(int* conta, int valor) {
	*conta = *conta - valor;
}

int main (void) {

	int minha_conta_1;
	int minha_conta_2;
	int preco;
	int* conta;
	
	printf("Digite o saldo da primeira conta: ");
	scanf("%d", &minha_conta_1);
	printf("Digite o saldo da segunda conta: ");
	scanf("%d", &minha_conta_2);
	printf("Digite o valor da compra: ");
	scanf("%d", &preco);
	
	if (minha_conta_1 > minha_conta_2) {
		compra(&minha_conta_1, preco);
	} else if (minha_conta_1 < minha_conta_2) {
		compra(&minha_conta_2, preco);
	} else {
		printf("Saldos iguais! Compra não efetuada.\n");
	}
	
	printf ("Compra efetuada!\nSaldos atuais: %d, %d\n", minha_conta_1, minha_conta_2);
	return 0;
	
}
