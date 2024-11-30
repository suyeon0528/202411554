#include <stdio.h>
#include <string.h>

struct city
{
	char name[50];
	char country[50];
	int population;

};

int main(void)
{
	struct city arr[3];
	printf("Input three cities: \n");

	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		arr[i].country[strcspn(arr[i].country, "\n")] = '\0';

		printf("Population> ");
		scanf("%d", &arr[i].population);
		getchar();
	}

	printf("Printing the three cities: \n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}

	return 0;
}