#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, z, m;
	int a, b, c;
	x = 1;
	y = 3; z = 5;
	a = 3;
	b = 4;
	c = 5;
	
	y = a*x*x + b*x + c;	//계산코드 
	m = (x + y + z)/3;		//계산코드 
	
	printf("y = %d, m = %d\n", y, m);
	return 0;
}
