#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	printf("==================\n");
	printf("====1.开始游戏====\n");
	printf("====2.结束游戏====\n");
	printf("==================\n");
	printf("请输入你的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game() {
	int guess = rand() % 100 + 1;   //生成随机整数1-100
	while (1) {
		printf("请输入一个数字 (1-100): ");
		int n = 0;
		scanf("%d", &n);
		if (n > guess) {
			printf("输入数字过高!\n");
		}
		else if (n < guess) {
			printf("输入数字过低!\n");
		}
		else {
			printf("输入数字正确!!!\n");
			break;
		}
	}
}

int main() {
	//时间戳,unsigned int是一个无符号的32位整数,time_t是一个有符号的64位整数
	srand((unsigned int)time(0));   //强制类型转换
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 2) {
			printf("退出游戏!\n");
			break;
		}
		else {
			printf("输入有误!\n");
		}
	}
	system("pause");
	return 0;
}