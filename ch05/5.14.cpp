//5.14 convert.c ����
// convert.c -- ͨ������ѧϰ�Զ�����ת����Ŀ�����͵������뽵��

#include <stdio.h>

int main(void) {
	char ch;
	int i;
	float f1;

	f1 = i = ch = 'C';			//C��Ӧ��ASCII����67
	printf("ch = %c,i = %d, f1 = %2.2f\n", ch, i, f1);//������ʾ
	ch++;
	i = f1 + 2 * ch; //i��Ϊfloat
	f1 = 2.0 * ch + i;
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
	ch = 1107;
	printf("Now ch = %c\n", ch);	//charֻ��1���ֽڣ�����
	ch = 80.89;
	printf("Now ch = %c\n", ch);

	return 0;
}