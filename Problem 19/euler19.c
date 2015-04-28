#include <stdio.h>

int limit(int m, int y);

int main(void)
{
	int day, dayWeek, month, year, limitDays, limitMonths = 12, cont = 0;
	int i, j, k, l = 0;
	char week[7] = "MtWTFsS";
	
	for (k = 1900; k <= 2000; k++)
	{
		year = k;
		
		for (j = 1; j <= limitMonths; j++)
		{
			month = j;
			limitDays = limit(month, year);
		
			for (i = 1; i <= limitDays; i++)
			{
				day = i;
				
				l++;
				l %= 7;

				dayWeek = week[l];
				
				if (dayWeek == 'S' && day == 1 && year >= 1901)
				{
					cont++;
				}
			}
		}
	}
	
	printf("%d\n", cont);
	
	getch();

	return 0;
}

int limit(int m, int y)
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}
	else if (m == 2)
	{
		if ((y%4 == 0 && y%100 != 0) || y%400 == 0)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	else
	{
		return 31;
	}
}
