#define _CRT_SECURE_NO_WARNINGS 1
//gets()函数：读取字符串到参数中，参数是数组
//头文件stdio.h
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int num = 0;
	for (i = 0; i<7; i++)
	{
		int count = 6-i;
		num = 2 * (i + 1) - 1;
		for (j = 0; j < 13; j++)
		{
			if (count!=0)
			{
				printf(" ");
				count--;
			}
		}
		for (; num!=0; num--)
		{
			
				printf("*");
				
		}
		printf("\n");
	}
	for (i = 5; i >=0; i--)
	{
		int count = 6 - i;
		num = 2 * (i + 1) - 1;
		for (j = 0; j < 13; j++)
		{
			if (count != 0)
			{
				printf(" ");
				count--;
			}
		}
		for (; num != 0; num--)
		{

			printf("*");

		}
		printf("\n");
	}
		
		return 0;
}
	
