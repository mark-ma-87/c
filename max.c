/*
 *定义一个无序数组，包含正数、负数和0，要求从中找出3个数的乘积最大。
 */
#include <stdio.h>
int main()
{
	int data1, data2;
	int max1 = 0, max2 = 0, max3 = 0, min1 = 0, min2 = 0;
	int a[10000];
	int flag1, flag2, flag3;
	int n, i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > max1)
		{
			max3 = max2;
			max2 = max1;
			max1 = a[i];
			flag1 = i;
		}
		if (a[i] > max2 && i != flag1)
		{
			max3 = max2;
			max2 = a[i];
			flag2 = i;
		}
		if (a[i] > max3 && i != flag1 && i != flag2)
		{
			max3 = a[i];
		}
		if (a[i] < min1)
		{
			min2 = min1;
			min1 = a[i];
			flag3 = i;
		}
		if (a[i] < min2 && i != flag3)
		{
			min2 = a[i];
		}
	}
	
	data1 = max1 * max2 * max3;
	data2 = max1 * min1 * min2;

	if (data1 > data2)
	{
		printf("%d\n", data1);
	}
	else
	{
		printf("%d\n", data2);
	}
	return 0;
}
