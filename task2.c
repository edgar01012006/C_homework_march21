#include <stdio.h>

int main()
{
	int num = 0;
	int num_copy = 0;

	printf("enter a number\n");
	scanf("%d", &num);

	num_copy = num;
	for (int i = 1; i <= num / 2; ++i)
	{
		if (num % i == 0)
		{
			num_copy -= i;
		}
	}

	if (num_copy == 0)
	{
		printf("your number is perfect\n");
	}
	else
	{
		printf("your numbers is not perfect\n");
	}
	return 0;
}