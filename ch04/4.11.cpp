//4.11 intconv.c ����
//* intconv.c -- ͨ������ѧϰ����ת�������ƥ������ʲô���

#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void) {
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);	//����
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	//ǰ������ ����65200=65536-336
	printf("num as int and char: %d %c\n", num, num);
	//charֻ��һ��byte,����ֻ��ȡ336���ֽڵĺ�һ�ֽڣ���ת��ASCII���ֵ
	printf("WORDS as int ,short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
	//�ڶ���Ҳ��ֻѡȡ�˺�����bytes��ֵ��������ѡȡ�����һ��bytes��ֵ

	return 0;
}