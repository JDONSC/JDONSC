#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void init(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = i;
	}
}

void empty(int arr[], int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		arr[i] = 0;
		printf("%d  ", arr[i]);
	}
}

void reverse(int arr[], int len) {
	int i = 0;
	int left = 0;
	int right = len - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	for (int i = 0; i < len; i++) {
		printf("%d  ", arr[i]);
	}
}

int menu() {
	printf("**********************\n");
	printf("*****1.初始化数组*****\n");
	printf("*****2. 清空数组 *****\n");
	printf("*****3. 逆置数组 *****\n");
	printf("**********************\n");
	int a = 0;
	printf("your choice: \n");
	scanf("%d", &a);
	return a;
}

int main() {
	int a= menu();
	int arr[] = { 2,7,9,6,8 };
	int len = sizeof(arr) / sizeof(int);
	switch (a) {
		case 1:
			printf("初始化数组: \n");
			init(arr, len);
			for (int i = 0; i < len; i++) {
				printf("%d  ",arr[i]);
			}
			break;
		case 2:
			printf("清空数组: \n");
			empty(arr, len);
			break;
		case 3:
			printf("逆置数组: \n");
			reverse(arr, len);
			break;
		default:
			break;
	}
	system("pause");
	return 0;
}