#include <stdio.h>
#include <stdlib.h>

void reverse_string(char* str, int i, int j) {
	char tmp;
	for (; i < j; i++, j--) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void reverse_word(char* str) {
	int i;
	int start = 0; 
	int end = 0;
	for (i = 0; str[i]; i++) {
		if (str[i] == ' ') {
			end = i - 1;
			reverse_string(str, start, end);
			start = i + 1;
		}
	}
	reverse_string(str, start, i - 1);
	reverse_string(str, 0, i - 1);
}

int main() {
	char str[] = "student a am i";
	reverse_word(str);
	puts(str);
	system("pause");
	return 0;
}