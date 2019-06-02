#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, num;
	while (1) {
		printf("请输入2个整数: ");
		scanf("%d %d", &a, &b);
		num = a % b;
		while (num) {
			a = b;
			b = num;
			num = a % b;
		}
		printf("最大公约数为: %d\n", b);
	}
		system("pause");
	return 0;
}