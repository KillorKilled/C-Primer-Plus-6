/*1.ͨ��ʵ��۲�ϵͳ��δ����������磬
	�������������������
	������̫������ӣ��ʲο�ľ���ʦ�ֵĴ���
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int biggest_int = INT_MAX;
	float biggest_flt = __FLT_MAX__;
	float small_flt = __FLT_MIN__;

	printf("INT_MAX = %d,INT_MAX + 1 = %d\n",
	       biggest_int, biggest_int + 1);
	printf("FLT_MAX = %e, FLT_MAX * 100.0 = %e\n",
	       biggest_flt, biggest_flt * 100.0);
	printf("FLT_MIN = %e, FLT_MIN * 100.0 = %e\n",
	       small_flt, small_flt / 100.0);
	//������û�г��ִ���
	return 0;
}