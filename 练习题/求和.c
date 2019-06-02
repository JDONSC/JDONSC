#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, flag = 1;
	double sum = 0,tmp=0;
	for (i = 1; i < 101; i++) {
		tmp = 1.0 / i * flag;
		sum += tmp;
		flag *= -1;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}