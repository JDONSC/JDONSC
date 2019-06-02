#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Prime(int n) {
	int i = 0;
	int j = 0;
	j = sqrt(n);
	for (i = 2; i <= j; i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	int ret;
	printf("please enter n(n>1): ");
	scanf("%d", &n);
	ret = Prime(n);
	if (ret == 1) {
		printf("%d is a prime number.\n", n);
	}
	else {
		printf("%d is not a prime number.\n", n);
	}
	system("pause");
	return 0;
}