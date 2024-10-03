#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	printf("Enter an integer:");
	scanf_s("%d", &number);

	if (number % 2 == 0) {
		printf("%d is even.", number);
	}
	else {
		printf("%d is odd.", number);
	}
	return 0;
}