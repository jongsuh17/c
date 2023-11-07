#include <stdio.h>

int main(void) {
	printf_s("Please input five integers: ");

	int a[4];
	scanf_s("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	int even[4];
	int odd[4];
	int countere = 0;
	int countero = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 2 == 0) {
			even[countere] = a[i];
			countere++;
		}
		else {
			odd[countero] = a[i];
			countero++;
		}
	}
		printf_s("\nOdd numbers: %d %d %d", odd[0], odd[1], odd[2]);
		printf_s("\nEven numbers: %d %d", even[0], even[1]);
	return 0;
}