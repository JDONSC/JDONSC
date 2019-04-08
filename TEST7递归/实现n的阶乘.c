#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Factor(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * Factor(n - 1);
	}
}

int FactorN(int n) {
	int ret = 1;
	int i = 0;
	for (i = 1; i <= n; ++i) {
		ret = ret * i;
	}
	return ret;
}

int main() {
	int n = 0;
	printf("请输入一个大于0的整数: ");
	scanf("%d", &n);
	printf("%d\n", Factor(n));
	printf("%d\n", FactorN(n));
	system("pause");
	return 0;
}