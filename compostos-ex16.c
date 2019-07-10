#include <stdio.h>

struct SPonto {
	int x;
	int y;
	int z;
};

union UPonto {
	int vec[3];
	struct SPonto stp;
};

void main (void) {

	union UPonto pt;
	
	pt.vec[0] = 10;
	pt.vec[1] = 20;
	pt.vec[2] = 30;
	printf("(%d,%d,%d)\n", pt.stp.x, pt.stp.y, pt.stp.z);

	pt.stp.x = 40;
	pt.stp.y = 50;
	pt.stp.z = 60;
	printf("(%d,%d,%d)\n", pt.vec[0], pt.vec[1], pt.vec[2]);
	
}
