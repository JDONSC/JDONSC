#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int i, j;
	for (i = 0; i < 3; i++) {
		j = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = j;
	}
	printf("new arr1=");
	for (i = 0; i < 3; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("new arr2=");
	for (i = 0; i < 3; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}