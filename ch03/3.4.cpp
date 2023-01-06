//3.4printf2.c程序
/*通过这个程序学习不同类型常量打印和溢出问题*/
#include <stdio.h>

int main(void) {
	//说明不同类型的大小
	printf("sizeof(unsigned long long int) = %zdbytes\n", sizeof(unsigned long long int));
	printf("sizeof(long long int) = %zdbytes\n", sizeof(long long int));
	printf("sizeof(long int) = %zdbytes\n", sizeof(long int));
	printf("sizeof(unsigned int) = %zdbytes\n", sizeof(unsigned int));
	printf("sizeof(int) = %zdbytes\n", sizeof(int));
	printf("sizeof(short) = %zdbytes\n", sizeof(short));
	printf("sizeof(unsigned short) = %zdbytes\n", sizeof(unsigned short));
	printf("sizeof(char) = %zdbytes\n", sizeof(char));
	printf("sizeof(float) = %zdbytes\n", sizeof(float));
	printf("sizeof(double) = %zdbytes\n", sizeof(double));
	printf("-----------------------\n");
	/*int是32位，short是16位*/
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}