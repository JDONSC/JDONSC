#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	printf("==================\n");
	printf("====1.��ʼ��Ϸ====\n");
	printf("====2.������Ϸ====\n");
	printf("==================\n");
	printf("���������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game() {
	int guess = rand() % 100 + 1;   //�����������1-100
	while (1) {
		printf("������һ������ (1-100): ");
		int n = 0;
		scanf("%d", &n);
		if (n > guess) {
			printf("�������ֹ���!\n");
		}
		else if (n < guess) {
			printf("�������ֹ���!\n");
		}
		else {
			printf("����������ȷ!!!\n");
			break;
		}
	}
}

int main() {
	//ʱ���,unsigned int��һ���޷��ŵ�32λ����,time_t��һ���з��ŵ�64λ����
	srand((unsigned int)time(0));   //ǿ������ת��
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 2) {
			printf("�˳���Ϸ!\n");
			break;
		}
		else {
			printf("��������!\n");
		}
	}
	system("pause");
	return 0;
}