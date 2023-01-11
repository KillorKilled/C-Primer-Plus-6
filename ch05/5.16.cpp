//5.16 running.c ����
//running.c -- A useful program for runner
//ͨ������ѧϰǿ������ת����������÷���û��Ҫ���ã�

#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void) {

	double distk, distm;	//�ܹ��ľ��루�ֱ��Թ����Ӣ��Ϊ��λ��
	double rate;			//ƽ���ٶȣ���Ӣ��/СʱΪ��λ��
	int min, sec;			//�ܲ���ʱ���Է��Ӻ���Ϊ��λ��
	int time;				//�ܲ���ʱ������Ϊ��λ��
	double mtime;			//��һӢ����Ҫ��ʱ�䣬����Ϊ��λ
	int mmin, msec;			//��һӢ����Ҫ��ʱ�䣬�Է��Ӻ���Ϊ��λ

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("Please enter, in kilometers, the distance run.\n");
	scanf("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);

	time = S_PER_M * min + sec;			//ʱ��ת������
	distm = M_PER_K * distk;			//����ת����Ӣ��
	rate = distm / time * S_PER_H;		//Ӣ��/��*��/Сʱ = Ӣ��/Сʱ
	mtime = (double)time / distm;		//ʱ��/���� = ��1Ӣ�����õ�ʱ��
	mmin = (int)mtime / S_PER_M;		//���������
	msec = (int)mtime % S_PER_M;		//���ʣ�������

	printf("You can %1.2f km (%1.2f miles) in %d min, %d sec.\n",
	       distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min, %d sec.\n",
	       mmin, sec);
	printf("Your average speed was %1.2f mph.\n", rate);

	return 0;
}
