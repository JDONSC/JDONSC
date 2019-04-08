#include <stdio.h>
#include <stdlib.h>

int Strlen(char* string) {
	if (* string != '\0') {
		return 1 + Strlen(string + 1);
	}
	else {
		return 0;
	}
}

int StrlenN(char* string) {
	int count = 0;
	while (* string != '\0') {
		count++;
		string++;
	}
	return count;
}

int main(){
	char string[] = "asdfghjk";
	int ret_1 = Strlen(string);
	int ret_2 = StrlenN(string);
	printf("%d\n", ret_1);
	printf("%d\n", ret_2);
	system("pause");
	return 0;
}