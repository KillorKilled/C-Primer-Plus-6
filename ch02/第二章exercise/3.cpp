//2.12�����ϰ
/*��дһ�������������任������������ʾ������ֵ�����ÿ������������*/
#include <stdio.h>

int main(void) {
	int years, days;
	const int days_per_year = 365;
	printf("��������ǣ�\n");
	scanf("%d", &years);
	days = days_per_year * years;
	printf("������伴��%d��\n", days);

	return 0;
}