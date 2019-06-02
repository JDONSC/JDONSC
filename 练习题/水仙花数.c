#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, j, k = 0;
	int narnumber = 0;
	printf("水仙花数: \n");
	//三位数字,百位,十位,个位的立方和等于这个数本身
	for (narnumber = 100; narnumber <= 999; ++narnumber) {
		i = narnumber / 100;   //百位
		j = narnumber / 10 % 10;    //十位
		k = narnumber % 10;    //个位
		if (narnumber == pow(i, 3) + pow(j, 3) + pow(k, 3)) {
			printf("%d \n", narnumber);
		}
	}
	system("pause");
	return 0;
}