//fathm_ft.c---��2ӢѰת����Ӣ��
#include <stdio.h>

int main(void) {
	int feet, fathoms;

	fathoms = 2;		//����Ҳ�����ö����Լ�������scanf
	feet = 6 * fathoms;	//�����ڳ˺�Ҳ���˿ո�Ϊ�����ӳ���Ŀɶ���
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}

/*�ܽ���δ����������һ���ṩ��1.��������
2.������������滻
3.printf��ӡ��ֵ��һ���Ǳ���Ҳ�����Ǹ�ֵ���ʽ���
*/