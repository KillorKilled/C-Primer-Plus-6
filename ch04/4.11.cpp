//4.11 intconv.c 程序
//* intconv.c -- 通过此例学习整形转换如果不匹配会出现什么结果

#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void) {
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);	//正常
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	//前面正常 后面65200=65536-336
	printf("num as int and char: %d %c\n", num, num);
	//char只有一个byte,所以只读取336两字节的后一字节，并转换ASCII码的值
	printf("WORDS as int ,short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
	//第二个也是只选取了后两个bytes的值，第三个选取了最后一个bytes的值

	return 0;
}