#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char password[120];
	int t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", password);
		int len = strlen(password);
		if (len < 8)
		{
			printf("NO\n");
			continue;
		}
		if (isdigit(password[0]))
		{
			printf("NO\n");
			continue;
		}
		int num = 0, upper = 0, lower = 0;
		for (int i = 0; i < len; i++)
		{
			if (num + upper + lower >= 2) break;
			if (!num) if (isdigit(password[i])) num = 1;
			if (!upper) if (isupper(password[i])) upper = 1;
			if (!lower) if (islower(password[i])) lower = 1;
		}
		(num + upper + lower >= 2) ? puts("YES") : puts("NO");
	}
	return 0;
}
