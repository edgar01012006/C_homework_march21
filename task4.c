#include <stdio.h>

int main()
{
	int n = 0;
	int counter = 0;

	printf("enter a number\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++counter, i += counter)
	{
		for (int j = i; j <= i + counter && j <= n; ++j)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}