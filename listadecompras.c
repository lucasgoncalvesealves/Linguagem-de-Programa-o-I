#include <stdio.h>

void compra(int conta1, int conta2, int valor[]) {
	
	int* conta;
	int e;
	int i;
	
	for (i = 0; i <= 4; i++) {
		if (conta1 > conta2) {
			conta = &conta1;
			*conta = *conta - valor[i];
			printf("Compra efetuada!\nSaldos atuais: %d, %d\n", conta1, conta2);
		}
		else if (conta2 > conta1) {
			conta = &conta2;
			*conta = *conta - valor[i];
			printf("Compra efetuada!\nSaldos atuais: %d, %d\n", conta1, conta2);
		}
		else {
			printf("Saldos iguais! Escolha uma das duas contas para continuar.");
			scanf_s("%d", &e);
			if (e == 1) {
				conta = &conta1;
				*conta = *conta - valor[i];
				printf("Compra efetuada!\nSaldos atuais: %d, %d\n", conta1, conta2);
			}
			else if (e == 2) {
				conta = &conta2;
				*conta = *conta - valor[i];
				printf("Compra efetuada!\nSaldos atuais: %d, %d\n", conta1, conta2);
			}
		}
	}	

}

int main (void) {

	int minha_conta_1;
	int minha_conta_2;
	int compras[] = { 100, 50, 80, 30, 20 };
	
	printf("Digite o saldo da primeira conta: ");
	scanf_s("%d", &minha_conta_1);
	printf("Digite o saldo da segunda conta: ");
	scanf_s("%d", &minha_conta_2);
	
	compra(minha_conta_1, minha_conta_2, compras);

	return 0;
	
}