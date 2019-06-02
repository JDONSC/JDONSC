#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("%d  %d\n", a, b);
	system("pause");
	return 0;
}