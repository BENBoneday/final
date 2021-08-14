#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n, int arr[])
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < n * n; i++)
	{
		scanf("%d", &temp);
		arr[i] = temp;
	}
	for (i = 0; i < n * n; i++)
	{
		printf("%d ", arr[i]);
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if ((i + 1) == n*(j+1))
			{
				printf("\n");
			}
		}
	}
	printf("sum=%d", arr[0] + arr[n + 1] + arr[2*n+2] + arr[3*n+3] + arr[4*n+4]);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[25] = {0};
	print(n, arr);
	return 0;
}