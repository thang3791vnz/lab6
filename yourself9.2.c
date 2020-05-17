#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, i, t;
	int sum = 0;
	printf("\nNhap vao num1: ");
	scanf("%d", num1);
	
	printf("\nNhap vao num2: ");
	scanf("%d", num2);
	
	t = num1 % 2;
	if(t == 1)
	{
		for(i = num1; i <=2; i+=2)
		{
			sum += i;
			printf("\nCac so le nam giua 2 so la: ", i);
		}
	}
	printf("\nTong cac so le nam giua 2 so la: ", sum);
	
	return 0;
}
