#include "stdio.h"

void main(void)
{
	int pt = 1024;
	int sum = 0;
	while (pt >= 3)
	{
		--pt;
		if (pt % 3 == 0 || pt % 5 == 0)
			sum += pt;
	}
	printf("%d", sum);
}

