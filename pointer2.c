#define _CRT_SECURE_NO_WARNINGS 1
/*
回调函数：把函数指针作为参数int （*pr）（int，int）传入另一个函数
*/
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*** 0 退出 ******* 1 加法 ***\n");
	printf("*** 2 除法 ******* 3 乘法 ***\n");
	printf("*** 4 除法 ******* ****** ***\n");
}
int main()
{
	int input = 0;
	int ret = 0;
	int (*pr[5])(int, int) = { 0,add,sub,mul,div };
	while (1)
	{
		menu();
		printf("请输入！\n");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			int x, y;
			printf("输入两个数： ");
			scanf("%d%d", &x, &y);
			ret = pr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出！");
			break;
		}
		else
		{
			printf("输入错误！\n");
		}
	}
	return 0;
}