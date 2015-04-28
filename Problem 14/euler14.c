#include <stdio.h>

int collatz (unsigned int n)
{
	int cont = 0;
	
	while (n != 1)
	{	
		if (n%2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (3*n)+1;
		}
		
		cont++;
	}
	
	return cont;
}

void print_collatz (unsigned int n)
{
	while (n != 1)
	{
		printf("%u ", n);
	
		if (n%2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (3*n)+1;
		}
		
		if (n == 1)
		{
			printf("1\n");
		}
	}
}

int main(void)
{
	int cont, inicio, fim, chain = 0;
	unsigned int n, nChain;
	
	printf("Entre com o numero de inicio e o de fim.\n");
	scanf ("%d %d", &inicio, &fim);
	
	for (n = inicio+1; n < fim; n++)
	{
		cont = collatz(n) + 1;
		printf("\nA sequencia do valor %u tem %d termos.\n", n, cont);
		print_collatz(n);
		
		if (cont > chain)
		{
			chain = cont;
			nChain = n;
		}
	}
	
	printf("\nA maior sequencia e a do numero %u, que tem %d valores.\n", nChain, chain);	
	
	getch();

	return 0;
}
