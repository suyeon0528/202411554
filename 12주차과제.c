#include <stdio.h>
int main(void)
{
	char str[100];

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);

	printf("���: ");
	for (int i = 0; str[i] != '\0'; i++) {
		if ('A' <= str[i] && str[i] <= 'Z')
			putchar(str[i] + 32);
		else if ('a' <= str[i] && str[i] <= 'z')
			putchar(str[i] - 32);
		else
			putchar(str[i]);
	}

	return 0;
}