//2.12�����ϰ
/*	��C������һ���������Ե�����һ����������дһ�����򣬵���һ����Ϊone_three()�ĺ�����
	�ú����ڵ�һ�д�ӡ����"one",�ٵ��õڶ�������two(),Ȼ������һ�д�ӡ����"three"��
	two()������һ����ʾ����"two"��main()�����ڵ���one_three()����ǰҪ��ӡ����"starting now:",
	���ڵ�����Ϻ���ʾ����"done!"���ó�������Ϊ��
	starting now:
	one
	two
	three
	done!
*/

#include <stdio.h>

void one_three(void);
void two(void);

int main(void) {

	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;

}

void one_three(void) {
	printf("one\n");
	two();
	printf("three\n");
}

void two(void) {
	printf("two\n");
}