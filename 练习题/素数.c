#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, k;
	for (i = 100; i <= 200; i++)
	{
		k = i / 2;
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j > k)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}