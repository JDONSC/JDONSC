#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int b = 20;
	printf("ԭʼֵΪ: %d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;  //a^b^b=a^0=a
	a = a ^ b;  //a^b^a^b^b=0^b=b
	printf("������ֵΪ: %d %d\n", a, b);
	system("pause");
	return 0;
}