#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10] = { 1,2,3,4,5,6,1,2,3,4 };
	int i;
	int sum = 0;
	for (i = 0; i < 10; i++) {
		sum ^= a[i];
	}
	//�ҵ�����λ
	int pos;
	for (i = 0; i < 32; i++) {
		if (sum & 1 << i) {
			pos = i;
			break;
		}
	}
	int num1 = 0,num2 = 0;
	for (i = 0; i < 10; i++) {
		//�������λΪ1,�����õ�һ����������
		if (a[i] & 1 << pos) {
			num1 ^= a[i];
		}
		//����λΪ0,�����õ���һ����������
		else {
			num2 ^= a[i];
		}
	}
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}