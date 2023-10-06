#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);
	int result;
	result = n % 2;
	if (result == 1) {
		printf("It is a prime number.\n");
	}
	else {
		printf("It is not a prime number.\n");
	}
	return 0;
}
