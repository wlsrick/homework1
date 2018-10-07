#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Please write a number:");
		scanf_s("%d", &n);
	if (n % 2 == 0)printf("%d is an even number\n", n);
	else printf("%d is an od number\n", n);
	system("pause");
	return 0;
}