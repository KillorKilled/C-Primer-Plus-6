//3.6altnames.c
/*altnames.c--通过此例学习可移植整数类型名*/

#include <stdio.h>
#include <inttypes.h>

int main(void) {
	int32_t me32;	//me32是一个32位有符号整形变量

	me32 = 45933945;
	printf("First,assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next assume int32_t is long int: ");
	printf("me32 = %ld\n", me32);		//看看ld是什么

	printf("Next,let's not make any assumptions.\n");
	printf("Instead,use a \"macro\" from inttypes.h:");
	printf("me32 = %" PRId32 "\n", me32);
	//dev-c++这句话总是报错
	//这一句话相当于："me32 = %" d "\n",me32
	//即:"me32 = %d\n",me32(字符串的合并)

	return 0;

}