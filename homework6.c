#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(int num, int qu, int shang, int sum)
{
	qu = num % 10;
	shang = num / 10;
	if(num != 0)
	{
		num = shang;
		sum = qu + DigitSum(num, qu, shang, sum);
	}
	return sum;
}
int main()
{
	int num = 0;
	int qu = 0;
	int shang = 0;
	int sum = 0;
	printf("请输入一个数！\n");
	scanf("%d", &num);
	int res = DigitSum(num,qu,shang,sum);
	printf("%d ", res);
	return 0;
}