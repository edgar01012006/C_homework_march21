#include <stdio.h>

int main()
{
	int n = 0;
	char c = '*';

	printf("enter a number\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			printf("%c ", c);
		}
		printf("\n");
	}
	return 0;
}