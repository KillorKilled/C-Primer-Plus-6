//4.5 defines.c����
//ͨ���������ѧϰlimit.h��float.h�е�һЩ��ʾ��������ʹ�С
//define.c -- ʹ��limit.h��float.h��ͷ�ļ��������ʾ����

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	printf("Some number limits for this system:\n");
	printf("--------------------limits-----------------\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long:%lld\n", LLONG_MIN);;
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("--------------------float------------------\n");
	printf("Largest double:%e\n", FLT_MIN);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;
}