#include <stdio.h>
#include <stdbool.h>

union Animal {
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

void main (void) {

	union Animal a1;
	struct Mamifero humano;
	humano.numdentes = 32;
	humano.volcerebro = 100;
	humano.velterra = 30;
	
	union Animal a2;
	struct Ave pinguim;
	pinguim.compbico = 20;
	pinguim.autvoo = false;
	pinguim.ffreqcanto = 22;
			
	union Animal a3;
	struct Reptil cobradagua;
	cobradagua.veneno = true;
	cobradagua.autagua = true;
	cobradagua.espovos = 15;

	union Animal a4;
	struct Anfibio salamandra;
	salamandra.numpatas = 4;
	salamandra.esppele = 1;
	salamandra.cauda = true;
	
	union Animal a5;
	struct Mamifero coyote;
	coyote.numdentes = 40;
	coyote.volcerebro = 70;
	coyote.velterra = 50;

	union Animal a6;
	struct Reptil jabuti;
	jabuti.veneno = false;
	jabuti.autagua = false;
	jabuti.espovos = 30;

}
