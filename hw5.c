#include <stdio.h>
#pragma warning(disable:4996)

int solve(int num) {
	if (num > 1) {
		solve(num / 2);
	}
	printf("%d", num % 2);
}
int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	solve(num);
}
