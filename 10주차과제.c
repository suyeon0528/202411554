#include <stdio.h>
int main(void)
{

	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* fptr = &arr1[0];
	int* bptr = &arr2[0];
	int temp;

	for (int i = 0; i < 6; i++) {

		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr++;
	}

	printf("after swap\n");

	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	return 0;
}