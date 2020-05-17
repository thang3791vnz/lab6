#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1 = 0;
	int num2 = 1;
	int num3;
	int i;
	int j;
	
	printf("\nNhap so Fibonacci: ");
	scanf("%d", &j);
	printf("\n%d %d", num1, num2);
	for ( i = 2; i < j; ++i);
	{
		num3 = num1 + num2;
		printf("%d", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n\n=============\n");
	printf("Nguon : photocopy :D");
	return 0;
}
