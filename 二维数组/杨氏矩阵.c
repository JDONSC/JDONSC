#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//因为要返回位置坐标(两个值),考虑到函数只能有一个返回值,所以采用封装成结构体的方式
typedef struct Position {
	int x, y;
}Position;

Position FindNum(int(*arr)[3], int data) {
	//从右上角开始查找,如果找到就返回对应位置坐标,没找到返回-1,-1
	Position p;
	p.x = -1;
	p.y = -1;
	int row = 0;
	int col = 2;
	while (row < 3 && col >= 0) {
		if (data == arr[row][col]) {
			p.x = row;
			p.y = col;
			return p;
		}
		else if (data > arr[row][col]) {
			row++;
		}
		else {
			col--;
		}
	}
	return p;
}

int main() {
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int n = 0;
	printf("请输入要查找的数字: ");
	scanf("%d", &n);
	Position p1 = FindNum(arr, n);
	if (p1.x != -1 && p1.y != -1) {
		printf("下标为: %d %d\n", p1.x, p1.y);
	}
	else {
		printf("不存在!\n");
	}
	system("pause");
	return 0;
}