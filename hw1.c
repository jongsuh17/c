
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int num1, num2;
	int result;
	printf("input two integers: ");
	scanf("%d %d", &num1,&num2);
	result = num1 & num2;
	printf("%d & %d = %d\n", num1, num2, result);
	result = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result);
	result = num1 ^ num2;
	printf("%d ^ %d = %d", num1, num2, result);
	return 0;
}