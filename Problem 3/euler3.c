#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int i, j, primo; 
	long long int n, x = 600851475143;
	
	n = x;
	
	i = 1;
	while (n > 1)
	{
		i++;
		primo = TRUE;
		
		if (i < 2 || (i % 2 == 0 && i != 2))
		{
			primo = FALSE;
		}
		else
		{
			for (j = 3; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					primo = FALSE;
				}
			}
		}
		
		while (!(n % i) && primo)
		{
			n /= i;
		}
	}
	
	printf("%d\n", i);
	
	getch();
	
	return 0;
}
