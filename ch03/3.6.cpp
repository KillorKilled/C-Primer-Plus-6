//3.6altnames.c
/*altnames.c--ͨ������ѧϰ����ֲ����������*/

#include <stdio.h>
#include <inttypes.h>

int main(void) {
	int32_t me32;	//me32��һ��32λ�з������α���

	me32 = 45933945;
	printf("First,assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next assume int32_t is long int: ");
	printf("me32 = %ld\n", me32);		//����ld��ʲô

	printf("Next,let's not make any assumptions.\n");
	printf("Instead,use a \"macro\" from inttypes.h:");
	printf("me32 = %" PRId32 "\n", me32);
	//dev-c++��仰���Ǳ���
	//��һ�仰�൱�ڣ�"me32 = %" d "\n",me32
	//��:"me32 = %d\n",me32(�ַ����ĺϲ�)

	return 0;

}