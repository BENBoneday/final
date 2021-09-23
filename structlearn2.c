#define _CRT_SECURE_NO_WARNINGS 1
/*
位段：定义结构体成员变量需要的bit位
可以节省内存
位段不能跨平台；
如；
struct s
{
	int a : 20;//需要20个比特位，先申请4个字节，如果是char的话，申请个字节
	int b : 5 ;
	
};
*/
/*
	枚举：enum
*/
#include<stdio.h>
enum color
{
	red,
	green,
	blue
};
int main()
{
	enum color blue=2;
	printf("%d", blue);
	return 0;
}