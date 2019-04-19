#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	int b = 0;
	printf("请输入大于0的整数a和b: ");
	scanf("%d %d", &a, &b);
	printf("平均数为: %d\n", (a + b) >> 1);
	system("pause");
	return 0;
}