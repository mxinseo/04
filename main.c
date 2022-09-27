#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;

	printf("input year: ");
	scanf("%d", &year);

	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("%d is leap year!\n", year);
	else
		printf("%d is not leap year\n", year);

	return 0;
}
