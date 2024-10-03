#include <stdio.h>
int main(void)
{
	int n, i, cnt = 0;
	printf("Please enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cnt++;
	}

	if (cnt == 2)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");

	return 0;
}