#include <stdio.h>

#define TRUE 1
#define FALSE 0

int search(int composite)
{
	int prime, primo, i, j, k;
	
	for (j = 2; j < composite; j++)
	{
		primo = FALSE;
		
		if (j % 2 != 0 || j == 2)
		{
			primo = TRUE;
			for (k = 3; k <= j/2; k++)
			{
				if (j%k == 0)
				{
					primo = FALSE;
				}
			}
		}
		
		if(primo)
		{
			prime = j;
		}
		else
		{
			continue;
		}
		
		i = 1;
		while (prime + (2 * (i*i)) < composite)
		{
			i++;
		}
		
		if (prime + (2 * (i*i)) == composite)
		{
			return 1;
		}
	}
	
	return 0;
}

int main(void) 
{
	int n = 9, composite, composto, achou, l;
	
	achou = FALSE;
	while (!achou)
	{
		n++;
		
		if (n%2 == 0)
		{
			composto = FALSE;
		}
		else
		{
			composto = FALSE;
			for (l = 3; l < n/2; l++)
			{
				if (n % l == 0)
				{
					composto = TRUE;
				}
			}
		}

		if (composto)
		{
			composite = n;
			achou = !(search(composite));
		}
	}
	
	printf("%d\n", composite);
	
	getch();
	
	return 0;
}
