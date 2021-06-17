#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 1200");

again:
	printf("请输入：我是猪，取消关机\n");
	scanf_s("%s", input,20);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");

	}
	else
	{
		//printf("请重新输入：");
		goto again;
	}
	return 0;
}
