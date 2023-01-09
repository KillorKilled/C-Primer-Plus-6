//4.9 flag.c程序
//flag.c -- 演示一些格式标记--展示整形的字段宽度和占位表示

#include <stdio.h>

int main(void) {
	printf("%x %X %#x\n", 31, 31, 31);
	printf("**%d**% d**% d**\n", 42, 42, -42);	//空格自行判断正负
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);	//0标记和精度一起出现，0标记会被省略

	return 0;
}