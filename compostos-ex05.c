#include <stdio.h>

struct Ponto {
	int x;
	int y;
	int z;
};

void main (void) {

	struct Ponto v1;
	v1.x = 1;
	v1.y = 0;
	v1.z = 5;

	struct Ponto v2;
	v2.x = 3;
	v2.y = 3;
	v2.z = 3;

	struct Ponto v3;
	v3.x = 0;
	v3.y = 10;
	v3.z = 0;

	printf("v1(%d,%d,%d)\nv2(%d,%d,%d)\nv3(%d,%d,%d)\n", v1.x, v1.y, v1.z, v2.x, v2.y, v2.z, v3.x, v3.y, v3.z);

	printf("Coord y: %d,%d,%d\n", v1.y, v2.y, v3.y);

	int* p;
	p = &v1.z; *p = *p + 10;
	p = &v2.z; *p = *p + 10;
	p = &v3.z; *p = *p + 10;
	printf("z + 10 = %d,%d,%d\n", v1.z, v2.z, v3.z);

	printf("Novo v2: %d,%d,%d\n", v2.x, v2.y, v2.z);

}