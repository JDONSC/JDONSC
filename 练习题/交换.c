#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int b = 20;
	int c;
	printf("ԭʼֵΪ: %d %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("������ֵΪ: %d %d\n", a, b);
	system("pause");
	return 0;
}