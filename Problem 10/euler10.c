#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	unsigned long long int i, j, sum = 0;
	int primo;
	
	for (i = 2; i < 2000000; i++)
	{
		primo = TRUE;
		
		if (i % 2 == 0 && i != 2)
		{
			primo = FALSE;
		}
		else
		{
			for (j = 3; j < i/2; j++)
			{
				if (i % j == 0)
				{
					primo = FALSE;
					break;
				}
			}
		}
		
		if (primo)
		{
			sum += i;
			printf("%llu\n", sum);
		}
	}

	getch();

	return 0;
}
