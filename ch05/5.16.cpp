//5.16 running.c 程序
//running.c -- A useful program for runner
//通过此例学习强制类型转换运算符的用法（没必要别用）

#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void) {

	double distk, distm;	//跑过的距离（分别以公里和英里为单位）
	double rate;			//平均速度（以英里/小时为单位）
	int min, sec;			//跑步用时（以分钟和秒为单位）
	int time;				//跑步用时（以秒为单位）
	double mtime;			//跑一英里需要的时间，以秒为单位
	int mmin, msec;			//跑一英里需要的时间，以分钟和秒为单位

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

	time = S_PER_M * min + sec;			//时间转换成秒
	distm = M_PER_K * distk;			//公里转换成英里
	rate = distm / time * S_PER_H;		//英里/秒*秒/小时 = 英里/小时
	mtime = (double)time / distm;		//时间/距离 = 跑1英里所用的时间
	mmin = (int)mtime / S_PER_M;		//求出分钟数
	msec = (int)mtime % S_PER_M;		//求出剩余的秒数

	printf("You can %1.2f km (%1.2f miles) in %d min, %d sec.\n",
	       distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min, %d sec.\n",
	       mmin, sec);
	printf("Your average speed was %1.2f mph.\n", rate);

	return 0;
}
