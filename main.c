#include <stdio.h>
/*exercise 4 (edit)*/
int main()
{
	int year;
	
	printf("input the year : ");
	scanf("%d",&year);
	
	printf("is the year %d the leap year? : %i",year,(year%4==0&&year!=100)||(year&400==0));
	return 0;

}
