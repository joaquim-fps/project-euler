#include <stdio.h>

int problem9 (int *a, int *b, int *c);

int main(void)
{
	int a, b, c;
		
	if (problem9 (&a, &b, &c))
	{
		printf("%d", a*b*c);
	}
	
	getch();

	return 0;
}

int problem9 (int *a, int *b, int *c)
{
	int i, j, k;
	
	for (i = 1; i < 1000; i++)
	{
		for (j = 1; j < i; j++)
		{
			for (k = 1; k < j; k++)
			{				
				if (i*i == j*j + k*k)
				{					
					if (i+j+k == 1000)
					{
						*a = i;
						*b = j;
						*c = k;
						return 1;
					}
				}
			}
		}
	}
	
	return 0;
}
