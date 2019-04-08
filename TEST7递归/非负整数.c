#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n) {
	if (n > 9) {
		return DigitSum(n / 10) + n % 10;
	}
	else {
		return n;
	}
}

int main() {
	int n = 0;
	printf("请输入一个非负整数: ");
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("组成它的数字之和为: %d\n", ret);
	system("pause");
	return 0;
}