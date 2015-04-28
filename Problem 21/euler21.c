#include <stdio.h>

int divisors(int n);

int main(void)
{
	int a, b, divisoresA, amicableSum = 0;
	
	for (a = 1; a < 10000; a++)
	{
		divisoresA = divisors(a);
		for (b = a; b < 10000; b++)
		{
			if (a != b && divisoresA == b && divisors(b) == a)
			{
				amicableSum += (a+b);
			}
		}
	}
	
	printf("%d\n", amicableSum);

	getch();

	return 0;
}

int divisors(int n)
{
	int i, sum = 0;
	
	i = 1;
	while (i < n)
	{
		if (n % i == 0)
		{
			sum += i;
		}
		
		i++;
	}
	
	return sum;
}
