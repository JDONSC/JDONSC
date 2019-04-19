#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	printf("******************\n");
	printf("****1.开始游戏****\n");
	printf("****2.结束游戏****\n");
	printf("******************\n");
	int choice = 0;
	printf("请输入您的选择: ");
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW 9
#define MAX_COL 9 
#define MINE_COUNT 10

//二维数组作为函数参数,直接就写成和实参一样即可,此时在函数内部修改能影响到函数外部,这是一个特殊情况
void Init (char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL]) {
	//把show_map中元素设为*
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			show_map[row][col] = '*';
		}
	}
	//把mine_map中元素设为0
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			mine_map[row][col] = '0';
		}
	}
	//在mine_map上随机生成10个位置最为地雷
	int mine_count = MINE_COUNT;
	while (mine_count > 0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1') {
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}

void PrintMap(char map[MAX_ROW][MAX_COL]) {
	printf(" |");
	for (int col = 0; col < MAX_COL; col++) {
		printf("%d ", col);
	}
	printf("\n");
	for (int col = 0; col < MAX_COL + 1 ; col++) {
		printf("--");
	}
	printf("\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("%d|", row);
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}

void UpdateShowMap(int row, int col, char mine_map[MAX_ROW][MAX_COL], char show_map[MAX_ROW][MAX_COL]) {
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1') {
		++count;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1') {
		++count;
	}
	if (row - 1 >= 0 && col + 1 < MAX_COL && mine_map[row - 1][col + 1] == '1') {
		++count;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1') {
		++count;
	}
	if (col + 1 < MAX_COL && mine_map[row][col + 1] == '1') {
		++count;
	}
	if (row + 1 < MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1') {
		++count;
	}
	if (row + 1 < MAX_ROW && mine_map[row + 1][col] == '1') {
		++count;
	}
	if (row + 1 < MAX_ROW && col + 1 < MAX_COL && mine_map[row + 1][col + 1] == '1') {
		++count;
	}
	show_map[row][col] = count + '0';
}

void Game() {
	//创建两个二位数组作为地图
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	//对两个地图进行初始化
	Init(show_map, mine_map);
	int blank_count = 0;
	while (1) {
		system("cls");
		PrintMap(show_map);
		//提醒玩家输入要翻开的坐标,并进项校验
		printf("请输入要翻开的坐标(row col): ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您输入的坐标非法!\n");
			continue;
		}
		if (show_map[row][col] != '*') {
			printf("您输入的坐标已翻开!\n");
			continue;
		}
		if (mine_map[row][col] == '1') {
			system("cls");
			PrintMap(mine_map);
			printf("很遗憾,踩雷了!\n");
			return;
		}
		++blank_count;
		if (blank_count == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("恭喜你,扫雷成功!\n");
			return;
		}
		//告诉玩家当前位置有几个雷
		UpdateShowMap(row, col, mine_map, show_map);
	}
}

int main() {
	srand((unsigned int)time(0));
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 2) {
			printf("byebye!\n");
			break;
		}
		else {
			printf("您的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}