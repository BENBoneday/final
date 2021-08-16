#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i < 8; i++)
	{
		for (k = 1; k < i; k++)
		{
			printf("  ");
		}
		for (j = 1; j < 8; j++)
		{
			printf("* ");
		}
		printf("\n");	
	}
	return 0;
}