#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int count = 0;
	for (i = 1; i < 101; i++) {
		if (i % 10 == 9) {
			count += 1;
		}
		if (i / 10 == 9) {
			count += 1;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}