#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, max,min;
	printf("Please enter three numbers:");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	printf("The maxi is %d\n", max);
	min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	printf("The min is %d\n", min);
	system("pause");
	return 0;
}