#include <stdio.h>
/*�ǽ�3*/
int main()
{
	int sec;

	printf("input the second :");
	scanf("%d", &sec);
	printf("the time is %d : %d\n", sec / 60, sec % 60);

	return 0;
}
