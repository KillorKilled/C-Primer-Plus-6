//7. ��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��һ��float���͵ı�������Ϊ1.0/3.0.
//	�ֱ���ʾ���μ���Ľ�������Σ�һ����ʾС�������6λ���֣�
//	һ����ʾС�������12λ���֣�
//	һ����ʾС�������16λ���֡�
//  ������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��1.0/3.0��ֵ����Щֵһ����

#include <stdio.h>
#include <float.h>

int main(void) {
	double double_num;
	float float_num;
	double_num = 1.0 / 3.0;
	float_num = 1.0 / 3.0;

	printf("double_num = %.6f float_num = %.6f\n", double_num, float_num);
	printf("double_num = %.12f float_num = %.12f\n", double_num, float_num);
	printf("double_num = %.16f float_num = %.16f\n", double_num, float_num);
	printf("FLT_DIG:float���͵���С��Ч����λ��\n");
	printf("FLT_DIG = %d DBL_DIG = %d", FLT_DIG, DBL_DIG);

	return 0;
}