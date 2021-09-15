#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int FindNum(int arr[3][3],int k,int* px,int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {4,6,9},{1,6,15},{7,12,34} };
	int k = 3;
	int x = 3, y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d，%d",x,y);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}