#include <stdio.h>
/*실습4*/
int main()
{
	int year;

	printf("input the year :");
	scanf("%d", &year);

	//400으로 나누어 떨어지면 윤년임
	if (year == 400)
		printf("is the year %d the leap year? : %i", year, year % 400 == 0);
	else //아니면 4로나눠지는데 100으로 나누어지지않으면
	{
		printf("is the year %d the leap year? : %i", year, (year % 4 == 0) && (year % 100 != 0));
	}
	return 0;

}
