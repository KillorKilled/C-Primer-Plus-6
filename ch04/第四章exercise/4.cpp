//4. 编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式
//	显示用户刚输入的信息：
//	Dabney, you are 6.208 feet（英尺） tall
//  使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米作为单位输入身高，并以米为单位显示出来。

#include <stdio.h>
#define feet_per_inch 12

int main(void) {
	float heigh;
	char name[20];
	printf("Please enter your heigh(inch) and name :\n");
	scanf("%f %s", &heigh, name);
	printf("%s your high is %.2f feet!\n", name, heigh / feet_per_inch);

	return 0;
}