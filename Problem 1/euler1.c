#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	
	printf("A soma dos numeros multiplos de 3 ou 5, menores que 1000, e: %d\n", sum);
	
	getch();

	return 0;
}
