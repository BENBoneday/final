#define _CRT_SECURE_NO_WARNINGS 1
#define M 4
#define N 5
#include<stdio.h>
int fun(int arr[M][N])
{

	int i, j,sum=0;
	int num;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("请输入数组元素！");
			scanf("%d", &num);
			arr[i][j] = num;
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == 0 || i == M - 1)
			{
				sum += arr[i][j];
			}
			else if (j == 0 || j == N - 1)
			{
				sum += arr[i][j];
			}
		}
	}
	return sum;
}
int main()
{
	int arr[M][N];
	
	
	int ret=fun(arr);
	printf("sum=%d ", ret);
	return 0;
}