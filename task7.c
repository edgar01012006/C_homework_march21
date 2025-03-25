#include <stdio.h>

int main()
{
	int n = 0;
	char c = '*';
	int counter1 = 0, counter2 = 0;

	printf("enter a number\n");
	scanf("%d", &n);

	counter1 = n;
	counter2 = n;

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j <= counter2; ++j)
		{
			if (j == counter1 || j == counter2)
			{
				printf("%c", c);
			}
			else
			{
				printf(" ");
			}
		}
		--counter1;
		++counter2;
		printf("\n");
	}

	n = n * 2 - 1;

	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 == 0)
		{
			printf(" ");
		}
		else
		{
			printf("%c", c);
		}
	}
	return 0;
}