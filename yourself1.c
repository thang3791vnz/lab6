#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	i = 100;
	do{
		printf("%d", i);
		i = i - 5;
	}
	while(i >= 0);
	printf("\t\t\t");
	return 0;
}
