#include <stdio.h>
#include <stdlib.h>

void reverse_string(char* string) {
	if (* string != '\0') {
		string++;  //一直向后进行统计元素
		reverse_string(string);
		printf("%c", *(string - 1));//从字符串最后一个元素输出
	}
}

int main() {
	char* string = "asdfgh";
	reverse_string(string);
	printf("\n");
	system("pause");
	return 0;
}