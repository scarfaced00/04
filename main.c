#include <stdio.h>
/*�ǽ�4*/
int main()
{
	int year;

	printf("input the year :");
	scanf("%d", &year);

	//400���� ������ �������� ������
	if (year == 400)
		printf("is the year %d the leap year? : %i", year, year % 400 == 0);
	else //�ƴϸ� 4�γ������µ� 100���� ����������������
	{
		printf("is the year %d the leap year? : %i", year, (year % 4 == 0) && (year % 100 != 0));
	}
	return 0;

}
