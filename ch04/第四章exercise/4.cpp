//4. ��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ��������ĸ�ʽ
//	��ʾ�û����������Ϣ��
//	Dabney, you are 6.208 feet��Ӣ�ߣ� tall
//  ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û���������Ϊ��λ������ߣ�������Ϊ��λ��ʾ������

#include <stdio.h>
#define feet_per_inch 12

int main(void) {
	float heigh;
	char name[20];
	printf("Please enter your heigh(inch) and name :\n");
	scanf("%f %s", &heigh, name);
	printf("%s your high is %.2f feet!\n", name, heigh / feet_per_inch);

	return 0;
}