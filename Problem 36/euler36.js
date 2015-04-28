var numbersDec = [];
var numbersBin = [];
var sum = 0;
var aux;

for (i = 0; i < 1000000; i++)
{
	numbersDec[i] = i.toString(10);
	numbersBin[i] = i.toString(2);

	aux = 1;
	
	for (j = 0; j < numbersDec[i].length && aux; j++)
	{
		if (numbersDec[i][numbersDec[i].length - (j+1)] != numbersDec[i][j])
		{
			aux = 0;
		}
	}
	
	for (j = 0; j < numbersBin[i].length && aux; j++)
	{
		if (numbersBin[i][numbersBin[i].length - (j+1)] != numbersBin[i][j])
		{
			aux = 0;
		}
	}
	
	if (aux)
	{
		sum += i;
	}
}

console.log(sum);