#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c,num;
	printf("������3������: \n");
	scanf("%d %d %d",&a,&b,&c);
	if (a < b) {
		num = a;
		a = b;
		b = num;
	}
	if(a < c){
		num = a;
		a = c;
		c = num;
	}
	if (b < c) {
		num = b;
		b = c;
		c = num;
	}
	printf("�Ӵ�С����Ϊ: %d %d %d\n", a, b, c);
		system("pause");
	return 0;
}