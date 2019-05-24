#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Animal {
	char nome[50];
	char cor1[10];
	char cor2[10];
	union Classe {
		struct Anfibio {
			int numpatas;
			int esppele;
			bool cauda;
		};
		struct Ave {
			int compbico;
			bool autvoo;
			int ffreqcanto;
		};
		struct Mamifero {
			int numdentes;
			int volcerebro;
			int velterra;
		};
		struct Reptil {
			bool veneno;
			bool autagua;
			int espovos;
		};
	};
};

void main (void) {

	struct Animal a1;
	strcpy(a1.nome, "Humano");
	strcpy(a1.cor1, "marrom");
	strcpy(a1.cor2, "bege");
	union Classe c1;
	struct Mamifero humano;
	humano.numdentes = 32;
	humano.volcerebro = 100;
	humano.velterra = 30;

	struct Animal a2;
	strcpy(a2.nome, "Pinguim");
	strcpy(a2.cor1, "preto");
	strcpy(a2.cor2, "branco");
	union Classe c2;
	struct Ave pinguim;
	pinguim.compbico = 20;
	pinguim.autvoo = false;
	pinguim.ffreqcanto = 22;
				
	struct Animal a3;
	strcpy(a3.nome, "Cobra d'agua");
	strcpy(a3.cor1, "preto");
	strcpy(a3.cor2, "verde");
	union Classe c3;
	struct Reptil cobradagua;
	cobradagua.veneno = true;
	cobradagua.autagua = true;
	cobradagua.espovos = 15;

	struct Animal a4;
	strcpy(a4.nome, "Salamandra");
	strcpy(a4.cor1, "preto");
	strcpy(a4.cor2, "amarelo");
	union Classe c4;
	struct Anfibio salamandra;
	salamandra.numpatas = 4;
	salamandra.esppele = 1;
	salamandra.cauda = true;

	struct Animal a5;
	strcpy(a5.nome, "Coiote");
	strcpy(a5.cor1, "bege");
	strcpy(a5.cor2, "branco");
	union Classe c5;
	struct Mamifero coyote;
	coyote.numdentes = 40;
	coyote.volcerebro = 70;
	coyote.velterra = 50;
	
	struct Animal a6;
	strcpy(a6.nome, "Jabuti");
	strcpy(a6.cor1, "preto");
	strcpy(a6.cor2, "amarelo");
	union Classe c6;
	struct Reptil jabuti;
	jabuti.veneno = false;
	jabuti.autagua = false;
	jabuti.espovos = 30;

}
