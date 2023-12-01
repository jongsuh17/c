#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct city {
	char name[20];
	char country[20];
	int pop;
} City;
int main(void) {
	City cit[3];
	printf("Input three cities:\n");
	
	for (int i = 0; i < 3; i++) {
		printf("Name> ");
		scanf(" %[^\n]", cit[i].name);
		printf("Country> ");
		scanf(" %[^\n]", cit[i].country);
		printf("Population> ");
		scanf(" %d", &cit[i].pop);
	}

	printf("Printing the three cities:\n");

	for (int i = 0; i < 3; i++) {
		printf("%s in %s with population of %d people\n", cit[i].name, cit[i].country, cit[i].pop);
	}
	return 0;
}