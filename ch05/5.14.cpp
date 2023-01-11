//5.14 convert.c 程序
// convert.c -- 通过此例学习自动类型转换：目标类型的升级与降级

#include <stdio.h>

int main(void) {
	char ch;
	int i;
	float f1;

	f1 = i = ch = 'C';			//C对应的ASCII码是67
	printf("ch = %c,i = %d, f1 = %2.2f\n", ch, i, f1);//正常表示
	ch++;
	i = f1 + 2 * ch; //i升为float
	f1 = 2.0 * ch + i;
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
	ch = 1107;
	printf("Now ch = %c\n", ch);	//char只有1个字节，降级
	ch = 80.89;
	printf("Now ch = %c\n", ch);

	return 0;
}