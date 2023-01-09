//4.2 praisel.c程序
/*praisel.c -- 使用不同类型的字符串*/

#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being"

int main(void) {
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}

//通过此例学习scanf只能读取“一个单词”,相比于fgets(),scanf在遇到第一个
//空格时就不再读取输入