#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Sn(int a) {
	int i, Sn_a = 0;
	int tmp = a;
	if (a > 0 && a < 10) {
		for (i = 0; i < 5; ++i) {
			Sn_a += a;
			a = (a * 10) + tmp;
		}
	}
	else {
		printf("输入有误!\n");
	}
	return Sn_a;
}

int main() {
	int a = 0;
	printf("请输入一个数a: ");
	scanf("%d", &a);
	printf("Sn=%d\n", Sn(a));
	system("pause");
	return 0;
}