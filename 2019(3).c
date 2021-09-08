#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 3
void sort(int arr[N][20],int button)
{
	int i, j,k;
	char temp;
	for (i = 0; i < N; i++)
	{
		for (j = N - 1; j > i; j--)
		{
			if (button == 1)
			{
				if (strcmp(arr[i] , arr[j])>0)
				{
					for (k = 0; k < 20; k++)
					{
						temp = arr[i][k];
						arr[i][k] = arr[j][k];
						arr[j][k] = temp;
					}
				}
			}
			if (button == 0)
			{
				if (strcmp(arr[j], arr[i])<0)
				{
					for (k = 0; k < 20; k++)
					{
						temp = arr[i][k];
						arr[i][k] = arr[j][k];
						arr[j][k] = temp;
					}
				}
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("第%d个字符串\n", i + 1);
		for (j = 0; j < 20; j++)
		{
			
			printf("%s\n", arr[i][j]);
		}
	}
}
int main()
{
	char arr[N][20];
	int i = 0;
	int button;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d个字符串\n",i+1);
		scanf("%s", arr[i]);
	}
	printf("递增按1，递减按0\n");
	scanf("%d", &button);
	sort(arr[N][20],button);
	return 0;
}