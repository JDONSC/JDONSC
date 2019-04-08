#include <stdio.h>
#include <stdlib.h>

int Fib(int n) {
	if (n <= 2) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}

int FibN(int n) {
	int an,an_1 = 1, an_2 = 1;
	int i;
	if (n < 2) {
		return 1;
	}
	for (i = 2; i < n; ++i) {
		an = an_1 + an_2;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

int main() {
	printf("%d\n", Fib(8));
	printf("%d\n", FibN(8));
	system("pause");
	return 0;
}