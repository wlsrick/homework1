#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	printf("Please write two numbers:");
	scanf_s("%d%d", &a,&b);
	if (a%b == 0)printf("the first number is a muitiple of the second\n");
	else printf("the first number is not a multiple of the second\n");
	system("pause");
	return 0;
}