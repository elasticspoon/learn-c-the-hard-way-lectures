#include <stdio.h>

void crash()
{
	char *test = NULL;
	int i;

	for (i = 0; i < 100000; i++)
	{
		printf("%c", test[i]);
	}
}

int main()
{
	int age = 10;
	int height = 72;

	printf("I am %d inches tall.\n", height);

	crash();
	crash();
	crash();
}
