#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	//输出上半部分,i控制行,j控制列
	for (i = 0; i < 7; i++) {
		//1,3,5,7,9,11,13类似于奇数
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	//输出下半部分
	for (i = 0; i < 6; i++) {
		//依次输出11,9,7,5,3,1
		for (j = 0; j < 2 * (6 - i) - 1; j++) {
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}