#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void LeapYear(int year) {
	if (year % 400 == 0) {
		printf("是闰年\n");
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		printf("是闰年\n");
	}
	else {
		printf("不是闰年\n");
	}
}

int main() {
	int year;
	printf("please enter year: ");
	scanf("%d", &year);
	LeapYear(year);
	system("pause");
	return 0;
}