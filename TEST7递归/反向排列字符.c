#include <stdio.h>
#include <stdlib.h>

void reverse_string(char* string) {
	if (* string != '\0') {
		string++;  //һֱ������ͳ��Ԫ��
		reverse_string(string);
		printf("%c", *(string - 1));//���ַ������һ��Ԫ�����
	}
}

int main() {
	char* string = "asdfgh";
	reverse_string(string);
	printf("\n");
	system("pause");
	return 0;
}