#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int b = 20;
	printf("原始值为: %d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;  //a^b^b=a^0=a
	a = a ^ b;  //a^b^a^b^b=0^b=b
	printf("交换后值为: %d %d\n", a, b);
	system("pause");
	return 0;
}