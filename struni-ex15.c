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

	union Animal humano {
		struct Mamifero humano {
			numdentes = 32;
			volcerebro = 100;
			velterra = 30;
		}
	};
	
	union Animal pinguim {
		struct Ave pinguim {
			compbico = 20;
			autvoo = false;
			ffreqcanto = 22;
		}
	};
			
	union Animal cobradagua {
		struct Reptil cobradagua {
			veneno = true;
			autagua = true;
			espovos = 15;
		}
	};

	union Animal salamandra {
		struct Anfibio sapo {
			numpatas = 4;
			esppele = 1;
			cauda = true;
		}
	};

	union Animal coyote {
		struct Mamifero coyote {
			numdentes = 40;
			volcerebro = 70;
			velterra = 50;
		}
	};

	union Animal jabuti {
		struct Reptil jabuti {
			veneno = false;
			autagua = false;
			espovos = 30;
		}
	};
}
