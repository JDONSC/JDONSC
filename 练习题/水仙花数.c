#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, j, k = 0;
	int narnumber = 0;
	printf("ˮ�ɻ���: \n");
	//��λ����,��λ,ʮλ,��λ�������͵������������
	for (narnumber = 100; narnumber <= 999; ++narnumber) {
		i = narnumber / 100;   //��λ
		j = narnumber / 10 % 10;    //ʮλ
		k = narnumber % 10;    //��λ
		if (narnumber == pow(i, 3) + pow(j, 3) + pow(k, 3)) {
			printf("%d \n", narnumber);
		}
	}
	system("pause");
	return 0;
}