#include <stdio.h>

int main(int argc, char *argv[])
{
	int hold[2][5] = {
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9}
	};
	int *tip = hold;
	int *oip = hold;

	char letters[] = {'a', 'b', 'c', '\0'};
	char *lp = letters;


	printf("%d\n", tip);
	printf("%d\n", *tip);
	printf("%d\n", tip[0]);
	//printf("%d\n", oip);
	//printf("%d\n", **oip);
	printf("%d\n", *(oip+6));
	printf("%c\n", *lp);

	return 0;
}
