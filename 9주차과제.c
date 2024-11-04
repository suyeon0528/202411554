#include <stdio.h>
int main(void)
{
	int number[5];
	
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
	}

	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (number[i] % 2 != 0) {
			printf("%d ", number[i]);
		}
	}

	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (number[i] % 2 == 0) {
			printf("%d ", number[i]);
		}
	}

	printf("\n");


	return 0;
}