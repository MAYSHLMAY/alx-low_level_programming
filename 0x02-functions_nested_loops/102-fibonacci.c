#include "stdio.h"


int main(void)
{
	int first = 0;

	int second = 1;

	int sum, i;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		printf("%d", sum);
		if (i != 49)
			printf("%s", ", ");
		first = second;
		second = sum;
	}
	return (0);
}





	return (0);
}
