//5.11 post_pre.c ����
//post_pre.c -- ����ǰ׺�ͺ�׺

#include <stdio.h>

int main(void) {
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;	//��׺�����
	pre_b = ++b;	//ǰ׺���ȼ�
	printf("a  a_post    b    b_post \n");
	printf("%ld   %5d%5d%5d\n", a, a_post, b, pre_b);

	return 0;
}

//������ˣ���д�����ʱ����Ӧ��С��Щ���������ɶ��Է���ǰλ