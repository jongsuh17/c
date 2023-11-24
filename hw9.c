#include <stdio.h>


int main(void) {
	char str[50];
	const int diff = 'a' - 'A';
	int i=0;
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	while (i < len){
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + diff;
		}
		else if(str[i] >='a' && str[i] <= 'z'){
			str[i] = str[i] - diff;
		}
		i++;
	}
	printf("%s", str);


	return 0;
}