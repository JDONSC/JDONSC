#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	int b = 0;
	printf("���������0������a��b: ");
	scanf("%d %d", &a, &b);
	printf("ƽ����Ϊ: %d\n", (a + b) >> 1);
	system("pause");
	return 0;
}