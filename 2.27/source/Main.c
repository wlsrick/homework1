#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//first
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
	//second
	int a = 4, b = 4;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 9;j++) {
			if (j <= a && j >= b)printf("*");
			else printf(" ");
		}
		printf("\n");
		a++;b--;
	}
	system("pause");
	return 0;
}