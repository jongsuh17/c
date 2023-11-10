#include <stdio.h>

int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	
	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}


	printf("\narr2: ");
	for (int j = 0; j < 6; j++) {
		printf("%d ", arr2[j]);
	}

	int* ptr1 = arr;
	int* ptr2 = arr2;
	int temp;
	for (int i = 0; i < 6; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr2++;
		ptr1++;
	}



	printf("\nafter swap\narr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}


	printf("\narr2: ");
	for (int j = 0; j < 6; j++) {
		printf("%d ", arr2[j]);
	}
	return 0;
}