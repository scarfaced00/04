#include <stdio.h>
/*½Ç½À6*/
int main()
{
	int sec;
	int min = 0;

	printf("input the second :");
	scanf("%d", &sec);


	printf("The time for %d second is %d : %d : %d", sec, (sec / 60) / 60, (sec / 60) % 60, sec % 60);

	return 0;

}
