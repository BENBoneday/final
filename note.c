#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Num(int num)
{
	int count = 0;
	int shang = 1;
	while (shang != 0)
	{
		shang = num / 10;
		count++;
		num = shang;
	}
	return count;
}
int cimi(int num,int len)
{
	int i = 0;
	int ji = 1;
	//int len = Num(num);
	for (i = 0; i < len; i++)
	{
		ji = ji * num;
	}
	return ji;
}
int Waterflowernum(int num)
{
	int sum = 0;
	int len = Num(num);
	int qu = 0;
	int num1 = num;
	while (num != 0)
	{
		
		qu = num % 10;
		num = num / 10;
		sum =sum + cimi(qu,len);
	}
	if (sum == num1)
	{
		return 1;
	}
	else return 0;
}
void print(void)
{
	int i = 0;
	printf("0~100000的水仙花数：\n");
	for (i = 0; i <= 100000; i++)
	{
		if (Waterflowernum(i) == 1)
		{
			printf("%d ", i);
		}
	}
}
int main()
{
	print();
	//int a=Waterflowernum(153);
	//printf("%d ", a);
	return 0;
}