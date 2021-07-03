#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算一个十进制数中有几个二进制的1
int twoType(int x)
{
	//普通算法
	int count = 0;
	int remainder=x;
	int quotient=x;
	while (quotient != 0)
	{
		remainder = quotient % 2;
		quotient = quotient / 2;

		if (remainder == 1)
		{
			count++;
		}
	}
	return count;
}
int twoType2(int x)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		
		if (1 == ((x >> i) & 1))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int x = 0;
	
	printf("请输入数字:");
	scanf("%d", &x);
	int result=twoType2(x);
	printf("%d", result);
	return 0;
}