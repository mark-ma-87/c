#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char iniString[5000];
	scanf("%s", iniString);
	int len = strlen(iniString);
	char temp;
	for (int i = 0; i < len/2; i++)
	{
		temp = iniString[i];
		iniString[i] = iniString[len - i - 1];
		iniString[len - i - 1] = temp;
	}
	printf("%s\n", iniString);
	return 0;
}
