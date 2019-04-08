#include <stdio.h>
#include <stdlib.h>

int Power(int n, int k) {
	if (k > 0) {
		return Power(n, k - 1)*n;
	}
	return 1;
}

int main() {
	printf("%d\n", Power(2, 3));
	system("pause");
	return 0;
}