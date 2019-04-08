#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Menu() {
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****2.结束游戏*****\n");
	printf("********************\n");
	printf("请输入您的选择: \n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW 3
#define MAX_COL 3

char chess_board[MAX_ROW][MAX_COL];

void Init() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			chess_board[row][col] = ' ';
		}
	}
}

void Print() {
	for (int row = 0; row < MAX_ROW; ++row) {
		printf("| %c | %c | %c |\n", chess_board[row][0], chess_board[row][1], chess_board[row][2]);
		if (row != MAX_ROW - 1) {
			printf("|---|---|---|\n");
		}
	}
}

void PlayerMove() {
	printf("玩家落子\n");
	while (1) {
		printf("请输入一组坐标(row,col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0) {
			printf("你的输入非法!\n");
			continue;
		}
		if (chess_board[row][col] != ' ') {
			printf("你输入的坐标被占用!\n");
			continue;
		}
		chess_board[row][col] = 'X';
		break;
	}
}

int IsFull() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			if (chess_board[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

char TestGameOver() {
	for (int row = 0; row < MAX_ROW; ++row) {
		if (chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2]) {
			return chess_board[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; ++col) {
		if (chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col]) {
			return chess_board[0][col];
		}
	}
	if (chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2]) {
		return chess_board[0][0];
	}
	if (chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0]) {
		return chess_board[0][2];
	}
	if (IsFull()) {
		return 'Q';
	}
	return ' ';
}

void ComputerMove() {
	printf("电脑落子!\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chess_board[row][col] != ' ') {
			continue;
		}
		chess_board[row][col] = 'O';
		break;
	}
}

void StartGame() {
	Init();
	char winner = ' ';
	while (1) {
		system("cls");
        Print();
		PlayerMove();
		winner = TestGameOver();
		if (winner != ' ') {
			break;
		}
	    ComputerMove();
		winner = TestGameOver();
		if (winner != ' ') {
			break;
		}
	}
	system("cls");
	Print();
	if (winner == 'X') {
		printf("恭喜你,玩家胜利!\n");
	}
	else if (winner == 'O') {
		printf("真遗憾,电脑胜利!\n");
	}
	else if (winner == 'Q') {
		printf("平局!!!\n");
	}
	else {
		printf("好像出错了!");
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			StartGame();
		}
		else if (choice == 2) {
			printf("byebye!");
			break;
		}
		else {
			printf("您的输入有误,请重新输入!\n");
		}
	}
	system("pause");
	return 0;
}