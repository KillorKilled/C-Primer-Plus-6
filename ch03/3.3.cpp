//3.3base.c����
/*base.c--��ʮ���ƣ��˽��ƺ�ʮ�����ƴ�ӡʮ������100*/

#include <stdio.h>

int main(void) {
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o;hex = %#x", x, x, x);

	return 0;
}