//5. ��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С
//	������Ӧ�����ļ�������ʱ�䡣ע�⣬����1���ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ����
//	�ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ����
/*
	At 18.12 megabits per second, a file of 2.20 megabytes
	downloads in 0.97 seconds.
*/

#include <stdio.h>

int main(void) {

	float speed, size;
	float time;

	printf("Please enter download speed(Mb/s) and file size(MB):\n");
	scanf("%f %f", &speed, &size);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
	time = size * 8 / speed;
	printf("downloads in %.2f seconds", size * 8 / speed);

	return 0;
}