#include <stdio.h>

int main()
{
	int n = 0;
	char c = '*';

	printf("enter a number\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		if (i == 1 || i == n)
		{
			for (int j = 1; j <= n; ++j)
			{
				printf("%c ", c);
			}
		}
		else
		{
			for (int j = 1; j <= n; ++j)
			{
				if (j == 1 || j == n)
				{
					printf("%c ", c);
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}