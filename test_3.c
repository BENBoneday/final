#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_one_bits(int Num)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		
		if (((Num>>i ) & 1) == 1)
		{
			count++;
			
		}
			//Num=Num >> 1;
	}
	return count;
}
int main()
{
	int Num = 0;
	scanf("%d",&Num);
	int ret = count_one_bits(Num);
	printf("1的个数是: %d ", ret);
	return 0;
}