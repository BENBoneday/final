#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//两个数比较不同二进制的位数

//方案一

int compare(int input1,int input2)
{
	int i = 0;
	int count = 0;
	//int x = input1 & input2;
	for (i = 0; i < 32; i++)
	{
		if ((((input1 >> i) & 1) == 1 && ((input2 >> i) & 1) == 1) || (((input1 >> i) & 1) == 0 && ((input2 >> i) & 1) == 0))
		{
			count++;
			
		}
		
	}
	return 32-count;
}
//方案二
//异或操作
int compare2(int input1, int input2)
{
	int x = input1 ^ input2;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int input1 = 0;
	int input2 = 0;
	printf("please input two num!\n");
	scanf("%d%d", &input1, &input2);
	int res = compare2(input1, input2);
	printf("%d ", res);

	return 0;
}