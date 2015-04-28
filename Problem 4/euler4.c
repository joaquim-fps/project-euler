#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned long long int x, y, pot10, palindrome, maior = 0;
	int n, cont = 0, i;
	
	scanf("%d", &n);
	
	pot10 = pow(10, n);
	
	char palindromeString[n*2];
	
	for (x = pot10; x >= pot10/10; --x)
	{
		for (y = pot10; y >= pot10/10; --y)
		{
			palindrome = x * y;
			
			sprintf(palindromeString, "%llu", palindrome);
			
			for (i = 0; i < n; i++)
			{
				if (palindromeString[2*n-(i+1)] == palindromeString[i])
				{
					cont = 1;
				}
				else
				{
					cont = 0;
					break;
				}
			}
			
			if (cont && palindrome > maior)
			{
				maior = palindrome;
				printf("%llu x %llu = %llu\n", x, y, maior);
				
				if (palindromeString[0] == '9')
				{
					return 0;
				}
			}
		}
	}
	
	getch();

	return 0;
}
