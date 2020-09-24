#include <stdio.h>
/*½Ç½À5*/
int main()
{
	unsigned int x;
	int b;

	printf("input a number : ");
	scanf("%ui", &x);

	for (b = 0; x != 0; x >>= 1)
	{
		if (x & 1)
		{
			b++;
		}
	}

	printf("The result is : %i\n", b);
	return 0;

}
