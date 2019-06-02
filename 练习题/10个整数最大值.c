#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[] = { 30,34,1,2,35,9,11,34,23,5 };
	int max = a[0];
	int i;
	for (i = 0; i < 10; i++) {
		if (max < a[i])
			max = a[i];
	}
	printf("最大值为: %d\n", max);
	system("pause");
	return 0;
}