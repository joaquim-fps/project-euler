#include <stdio.h>

int main(void)
{
	int fib = 1, fib_1 = 1, fib_2 = 0, sum = 0;

	while (fib < 4000000)
	{
		if (fib % 2 == 0)
		{
			sum += fib;
		}
		
		fib = fib_1 + fib_2;
		fib_2 = fib_1;
		fib_1 = fib;
	}
	
	printf("%d\n", sum);
	
	getch();

	return 0;
}
