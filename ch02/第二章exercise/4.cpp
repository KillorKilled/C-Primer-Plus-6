//2.12�����ϰ
/*
	��дһ�����������������
	For he's a jolly good fellow!
	For he's a jolly good fellow!
	For he's a jolly good fellow!
	Which nobody can deny!
	����main�������⣬�ó���Ҫ���������Զ��庯����һ����Ϊjolly,���ڴ�ӡǰ������Ϣ������һ�δ�ӡһ����
	��һ��������Ϊdeny,��ӡ���һ����Ϣ
*/
#include <stdio.h>

void jolly(void);
void deny(void);	//ע��Ҫ��ǰ����������

int main(void) {
	jolly();
	jolly();
	jolly();
	deny();			//ע��д�����ĸ�ʽ
	return 0;
}

void jolly(void) {
	printf("For he's a jolly good fellow!\n");
}

void deny(void) {
	printf("Which nobody can deny!\n");
}
