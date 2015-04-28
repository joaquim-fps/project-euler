#include <stdio.h>

int abundantSum (int n, int *lastAbundant, int *position);
int findAbundant (int x);

int abundantNumbers[28123];

int main(void)
{
	int i, sum, position, lastAbundant = 0;
	
	sum = position = 0;
	
	for (i = 1; i <= 28123; i++)
	{
		if (!(abundantSum(i, &lastAbundant, &position)))
			sum += i;
	}
	
	printf("%d\n", sum);

	getch();

	return 0;
}

int abundantSum (int n, int *lastAbundant, int *position)
{
	int j, innerJ;
	
	for (j = *lastAbundant + 1; j <= n - 12; j++)
	{
		if(findAbundant(j))
		{
			abundantNumbers[*position] = j;	
			*lastAbundant = j;
			*position = *position + 1; //position++ não funciona!
		}
	}
	
	for (j = 0; j < *position; j++)
	{
		for (innerJ = 0; innerJ < *position; innerJ++)
		{
			if (abundantNumbers[j] + abundantNumbers[innerJ] == n)
				return 1;
		}
	}
	
	return 0;
}

int findAbundant (int x)
{
	int k, totalDivisors = 0;
	
	for (k = 1; k < x; k++)
	{
		if (!(x%k))
			totalDivisors += k;
	}
	
	return totalDivisors > x;
}
