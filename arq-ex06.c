#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[64];
    int  peso;
};

void preenche_pessoa (struct Pessoa* p) {
	printf("Informe a idade: ");
	scanf("%d", &p->idade);
	printf("Informe o nome: ");
	scanf("%s", p->nome);
	printf("Informe o peso: ");
	scanf("%d", &p->peso);
};

void escreva_pessoa(FILE* f, struct Pessoa* p) {
	fwrite(&p->idade, sizeof(int), 1, f);
	fwrite(p->nome, sizeof(char), 64, f);
	fwrite(&p->peso, sizeof(int), 1, f);
};

void leia_pessoa(FILE* f, struct Pessoa* p) {
	struct Pessoa* r;
	r->idade = fread(&p->idade, sizeof(int), 1, f);
	r->nome = fread(p->nome, sizeof(char), strlen(p->nome), f);
	r->nome[strlen(p->nome)] = '\0';
	r->peso = fread(&p->peso, sizeof(int), 1, f);
	printf("%d", &r->idade);
	printf("%s", r->nome);
	printf("%d", &r->peso);
};

void main (void) {

	struct Pessoa pessoa[10];

	for (int i = 0 ; i < 10; i++) {
		preenche_pessoa(&pessoa[i]);
	};

	FILE* f1 = fopen("arq-ex06.bin", "wb");
	for (int i = 0; i < 10; i++) {
		escreva_pessoa(f1, pessoa);
	};
	fclose(f1);

	FILE* f2 = fopen("arq-ex06.bin", "rb");
	for (int i = 0; i < 10; i++) {
		leia_pessoa(f2, pessoa);
	};
	fclose(f2);

	//tamanho do arquivo bin: 720 bytes
	//boa parte disso � lixo criado pelos espa�os vazios da string nome

}