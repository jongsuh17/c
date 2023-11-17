#include <stdio.h>
#include <math.h>


double calc(double arr[5]) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	double mean = sum / 5;
	double sd = 0;
	for (int j = 0; j < 5; j++) {
		sd += pow((arr[j] - mean), 2);
	}
	sd = sqrt(sd / 5);
	return sd;
	
}
int main(void) {

	double arr[5];
	printf_s("Enter 5 real numbers: ");
	scanf_s("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf_s("Standard Deviation = %.3lf",calc(arr));
	return 0;
}