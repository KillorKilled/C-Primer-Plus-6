//6. 编写一个程序，先提示输入用户名，然后提示用户输入姓。在一行打印用户
//	输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐
//  接下来再打印相同的信息，但是字母个数与相应名和姓的开头对齐
/*
	Melissa Honeybee
		  7        8
	Melissa Honeybee
	7		8
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	char first_name[10], last_name[10];

	printf("Please enter your last name:\n");
	scanf("%s", last_name);
	printf("Please enter your first name:\n");
	scanf("%s", first_name);
	printf("%s %s\n", last_name, first_name);
	printf("%*d %*d\n"
	       , strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));
	printf("%s %s\n", last_name, first_name);
	printf("%-*d %-*d\n"
	       , strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));

	return 0;
}