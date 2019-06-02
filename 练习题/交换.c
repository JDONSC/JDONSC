#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int b = 20;
	int c;
	printf("原始值为: %d %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("交换后值为: %d %d\n", a, b);
	system("pause");
	return 0;
}