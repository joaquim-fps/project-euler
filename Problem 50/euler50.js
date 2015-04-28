var primes = []
var j;
var sum;
var maior = 0;
var nPrimes = 0;

function findPrime (x)
{
	if (x < 2 || (x % 2 == 0 && x != 2))
	{
		return 0;
	}
	else
	{
		for (k = 3; k < x/2; k++)
		{
			if (x%k == 0)
			{
				return 0;
			}
		}
	}
	
	return 1;
}

j = 0;
for (i = 0; i < 100000; i++)
{
	if (findPrime(i))
	{
		primes[j] = i;
		j++;
	}
}

for (i = 0; i < 9592; i++)
{
	j = i;
	sum = 0;
	cont = 0;
	while (sum < 1000000)
	{	
		sum += primes[j];
		cont++;
		
		if (findPrime(sum) && (sum > maior && cont > nPrimes))
		{
			maior = sum;
			nPrimes = cont;
		}
		
		j++;
	}
}

console.log(maior);