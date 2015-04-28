#include <stdio.h>

int main(void)
{
	int i, sum1, sum2;
	
	sum1 = sum2 = 0;
	
	for (i = 1; i <= 100; i++)
	{
		sum1 += (i*i);
		sum2 += i;
	}
	
	sum2 = sum2*sum2;
	
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d - %d = %d\n", sum2, sum1, sum2 - sum1);
	
	getch();

	return 0;
}
