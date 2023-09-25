
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double num1;
	double result;
	printf("Please enter kilometers: ");
	scanf("%lf", &num1);
	result = num1/1.609;
	printf("%.1f km is equal to %.1f miles", num1, result);
	return 0;
}