#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void MultiFor(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d  ", j, i, i*j);
			if (i == j) {
				printf("\n");
			}
		}
	}
}

int main() {
	int n;
	printf("please enter n: ");
	scanf("%d", &n);
	MultiFor(n);
	system("pause");
	return 0;
}