
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	for (int i = 0; i <5; i++) {
		for (int j = 0; j < 5-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}