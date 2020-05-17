#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, age;
	char name[30];
	printf("\nHo Ten: ");
	fgets(name, sizeof(name), stdin);
	printf("\nTuoi: ");
	scanf("%d", &age);
	printf("\n\n");
	for(n = 0; n <= age; n++)
		puts(name);
	return 0;
}
