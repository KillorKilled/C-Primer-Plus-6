//4.3praise2.c程序
//通过此例学习strlen和size of的区别
//strlen:字符串的有效长度
//size of:类型的长度（总长度）（如果是字符串则包含\0）

#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraodinary being

int main(void) {
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
	       strlen(name), sizeof name);
	printf("The phrase of praise has %zd letter ",
	       strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}