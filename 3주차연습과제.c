#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float distance;
	printf("Please enter kilometers : ");
	scanf("%f", &distance);
	printf("%.1f km is equal to %.1f miles", distance, distance / 1.609);
	return 0;
}