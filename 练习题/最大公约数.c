#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, num;
	while (1) {
		printf("������2������: ");
		scanf("%d %d", &a, &b);
		num = a % b;
		while (num) {
			a = b;
			b = num;
			num = a % b;
		}
		printf("���Լ��Ϊ: %d\n", b);
	}
		system("pause");
	return 0;
}