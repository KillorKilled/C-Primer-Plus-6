//5.15 pound.c ����
//pound.c -- ͨ������ѧϰ�������ĺ�����ô��ÿ������ʲô��˼
//ע��ʵ�κ��βεĸ�������

#include <stdio.h>
void pound(int n);	//û�з���ֵ����ǰ����void����ʽ����n��int�͵�

int main(void) {
	int times = 5;
	char ch = '!';
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}

void pound(int n) {
	while (n-- > 0)
		printf("#");
	printf("\n");

}