#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int v;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		v = a[0][i];
		a[0][i] = a[2][i];
		a[2][i] = a[1][i];
		a[1][i] = v;
	}

	printf(" -----\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
