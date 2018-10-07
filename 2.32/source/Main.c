#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float weight, height, BMI,a;
	printf("Please setup your weight in kilograms:");
	scanf_s("%f", &weight);
	printf("Please setup your height in centermeters:");
	scanf_s("%f", &height);

	a = height / 100;
	BMI = weight / (a*a);
	printf("%.2f\n", BMI);
	if (BMI < 18.5)
		printf("Uderweight\n");
	if (BMI >= 18.5&&BMI <= 24.9)
		printf("Normal\n");
	if (BMI >= 25 && BMI <= 29.9)
		printf("Overweight\n");
	if (BMI >= 30)
		printf("Obese\n");
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");
	system("pause");
	return 0;

}