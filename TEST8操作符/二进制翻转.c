#include <stdio.h>
#include <stdlib.h>

unsigned int round(unsigned n) {
	int i;
	unsigned tmp, sum = 0;
	for (i = 0; i < 32; ++i, n /= 2) {
		tmp = n % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main() {
	printf("%u\n", round(25));
	system("pause");
	return 0;
}