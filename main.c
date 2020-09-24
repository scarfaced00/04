#include <stdio.h>
/*½Ç½À2*/
int main()
{
	int a, b;

	printf("input two integers :");
	scanf("%d %d", &a, &b);

	printf("+ result is %d\n", a + b);
	printf("- result is %d\n", a - b);
	printf("* result is %d\n", a*b);
	printf("/ result is %d\n", a / b);
	printf("%% result is %d\n", a%b);

	return 0;
}
