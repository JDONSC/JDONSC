#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = 9;
	int tmp;
	//��i���ҳ�����,j�ҳ�ż��
	//��iΪż��,jΪ����ʱ,����
	while (a[i++] % 2 && i <= 9);
	while (a[j--] % 2 == 0 && j >= 0);
	while (i <= j) {
		tmp = a[i - 1];
		a[i - 1] = a[j + 1];
		a[j + 1] = tmp;
		while (a[i++] % 2);
		while (a[j--] % 2 == 0);
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}