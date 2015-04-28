#include <stdio.h>

int countPrime (int n, int m);
int findPrime (int x);

int main(void)
{
	int a, b, maior = 0, maiorA, maiorB, nPrimes;
	
	for (a = -999; a < 1000; a++)
	{
		for (b = -999; b < 1000; b++)
		{
			if (findPrime(b))
			{
				nPrimes = countPrime(a,b);
				
				if (nPrimes > maior)
				{
					maior = nPrimes;
					maiorA = a;
					maiorB = b;
				}
			}
		}
	}
	
	printf("%d\n", maiorA * maiorB);
	
	getch();
		
	return 0;
}

int countPrime (int n, int m)
{
	int i, result, prime, cont;
	
	i = 0;
	cont = 0;
	prime = 1;
	while (prime)
	{
		result = (i*i) + (n*i) + m;
		prime = findPrime(result);
		
		if (prime)
		{
			cont++;
		}
		
		i++;
	}
	
	return cont;
}

int findPrime (int x)
{
	int k;
	
	if (x < 2 || (x % 2 == 0 && x != 2))
	{
		return 0;
	}
	else
	{
		for (k = 3; k < x/2; k++)
		{
			if (!(x%k))
			{
				return 0;
			}
		}
	}
	
	return 1;
}
