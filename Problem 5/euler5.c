#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int x = 2, i, achou;
	
	
	while (TRUE)
	{
	achou = TRUE;
		for (i = 2; i <= 20; i++)
		{
			if (x%i != 0)
			{
				achou = FALSE;
				break;
			}
		}
		
		if (achou)
		{
			printf("%d\n", x);
			break;
		}
		
		x+= 2;
	}

	getch();

	return 0;
}
