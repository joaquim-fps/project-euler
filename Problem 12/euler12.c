#include <stdio.h>
#include <math.h>

#define TRUE 1

int divisors_count(unsigned long long int n);

int main(void)
{
	unsigned long long int i, tNum = 0;
	
	i = 1;
	while (TRUE)
	{
		tNum += i;
		
		if (divisors_count(tNum) > 500)
		{
			printf("%llu\n", tNum);
			break;
		}
		
		i++;
	}

	getch();

	return 0;
}

int divisors_count(unsigned long long int n)
{
	unsigned long long int j, sqr; 
	int cont;
	
	sqr = sqrt(n);
	
	cont = 0;
	j = 1;
	while (j <= sqr)
	{	
		if (n % j == 0)
		{				
			cont+= 2;
		}
		
		j++;
	}
	
	if (sqr * sqr == n)
	{
		cont--;
	}
		
	return cont;
}
