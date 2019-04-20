#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��ΪҪ����λ������(����ֵ),���ǵ�����ֻ����һ������ֵ,���Բ��÷�װ�ɽṹ��ķ�ʽ
typedef struct Position {
	int x, y;
}Position;

Position FindNum(int(*arr)[3], int data) {
	//�����Ͻǿ�ʼ����,����ҵ��ͷ��ض�Ӧλ������,û�ҵ�����-1,-1
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
	printf("������Ҫ���ҵ�����: ");
	scanf("%d", &n);
	Position p1 = FindNum(arr, n);
	if (p1.x != -1 && p1.y != -1) {
		printf("�±�Ϊ: %d %d\n", p1.x, p1.y);
	}
	else {
		printf("������!\n");
	}
	system("pause");
	return 0;
}