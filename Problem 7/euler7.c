#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int x, i, cont = 0, primo;

	i = 0;
	while (cont < 10001)
	{
		primo = TRUE;
		i++;
		
		if (i < 2 || (i%2 == 0 && i != 2))
		{
			primo = FALSE;
		}
		else
		{
			for (x = 3; x < i/2; x++)
			{
				if (i % x == 0)
				{
					primo = FALSE;
				}
			}
		}
		
		if (primo)
		{
			cont++;
		}
	}
	
	printf("%d\n", i);
	
	getch();

	return 0;
}
