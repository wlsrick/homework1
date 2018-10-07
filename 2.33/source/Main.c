#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float t, c, d, p, f, m = 0;
	printf("input Total Distance by Day(kilometers):");
	scanf_s("%f", &t);
	printf("input Cost by Gas:");
	scanf_s("%f", &c);
	printf("input Distance by single gas:");
	scanf_s("%f", &d);
	printf("input Parking Fee:");
	scanf_s("%f", &p);
	printf("input Passing Fee:");
	scanf_s("%f", &f);
	if (t / d < 1)m += c;
	else m += (t / d)*c;
	m += p + f;
	printf("The cost of one day is %f\n", m);
	system("pause");
	return 0;
}