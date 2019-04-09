#include <stdio.h>

#define SIZE 4

void bubble_sort(int a[], int n);

void bubble_sort(int a[], int n)
{
	int i, j, temp;
	for (j = 0; j < n - 1; j++)
	{
		for (i = 0; i < n - 1 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

int main()
{
	int number[SIZE] = {1, 9 ,3, 5};
	bubble_sort(number, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", number[i]);
	}
	printf("\n");
	return 0;
}
