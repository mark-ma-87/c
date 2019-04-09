#include <stdio.h>

int main()
{
	char a[10];
	fgets(a, sizeof(a), stdin);
	fputs(a, stdout);
}
