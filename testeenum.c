#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[255];
    int idade;
    char cpf[11];
};

struct Professor {
    struct Pessoa pessoa;
    char unidade[4];
    float salario;
};

struct Aluno {
    struct Pessoa pessoa;
    int periodo;
    float cr;
};

struct Funcionario {
    struct Pessoa pessoa;
    char cargo[30];
	float salario;
};

union Membro {
	struct Professor professor;
	struct Aluno aluno;
	struct Funcionario funcionario;
};

enum Membros {
	Aluno = 1,
	Professor = 2,
	Funcionario = 3
} quem;

void preenche_pessoa(struct Pessoa* p) {
	printf("Informe o nome: ");
	scanf("%s", p->nome);
	printf("Informe a idade: ");
	scanf("%d", &p->idade);
	printf("Informe o CPF: ");
	scanf("%s", p->cpf);
};

void preenche_professor(struct Professor* p) {
	preenche_pessoa(&p->pessoa);
	printf("Informe a unidade: ");
	scanf("%s", p->unidade);
	printf("Informe o salario: ");
	scanf("%f", &p->salario);
};

void preenche_aluno(struct Aluno* a) {
	preenche_pessoa(&a->pessoa);
	printf("Informe o periodo: ");
	scanf("%d", &a->periodo);
	printf("Informe o CR: ");
	scanf("%f", &a->cr);
};

void preenche_funcionario(struct Funcionario* f) {
	preenche_pessoa(&f->pessoa);
	printf("Informe o cargo: ");
	scanf("%s", f->cargo);
	printf("Informe o salario: ");
	scanf("%f", &f->salario);
};

void preenche_membro(union Membro* m) {
	printf("Aluno = 1 \nProfessor = 2 \nFuncionario = 3\n");
	scanf("%d", &quem);
	switch (quem) {
	case Aluno:
		preenche_aluno(&m->aluno);
		break;
	case Professor:
		preenche_professor(&m->professor);
		break;
	case Funcionario:
		preenche_funcionario(&m->funcionario);
		break;
	default:
		printf("Valor invalido!");
		break;
	};
};

void exibe_pessoa(struct Pessoa* p) {
	printf("%s,%d,%s,", p->nome, p->idade, p->cpf);
};

void exibe_professor(struct Professor* p) {
	exibe_pessoa(&p->pessoa);
	printf("%s,%.2f\n", p->unidade, p->salario);
};

void exibe_aluno(struct Aluno* a) {
	exibe_pessoa(&a->pessoa);
	printf("%d,%.2f\n", a->periodo, a->cr);
};

void exibe_funcionario(struct Funcionario* f) {
	exibe_pessoa(&f->pessoa);
	printf("%s,%.2f\n", f->cargo, f->salario);
};

void exibe_membro(union Membro* m) {
	printf("Aluno = 1 \nProfessor = 2 \nFuncionario = 3\n");
	switch (quem) {
	case Aluno:
		exibe_aluno(&m->aluno);
		break;
	case Professor:
		exibe_professor(&m->professor);
		break;
	case Funcionario:
		exibe_funcionario(&m->funcionario);
		break;
	default:
		printf("Valor invalido!");
		break;
	};
};

int main(void) {
	int i;
	//int n = 5;
    union Membro m1[5];
	for (i = 0; i < 5; i++) {
		preenche_membro(&m1[i]);
		exibe_membro(&m1[i]);
	};
    return 0;
}
