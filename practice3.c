//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define M 10
//
//int main()
//{
//	int arr[M][M] = { 0 };
//	int i, j;
//	for (i = 0; i < M; i++)
//	{
//		
//		for (j = 0; j < M; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (i = 0; i < M-1; i++)
//	{
//		for (j = 0; j < M-1; j++)
//		{
//			arr[i + 1][j + 1] = arr[i][j] + arr[i][j + 1];
//		}
//		
//	}
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M  - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < M; j++)
//		{
//			if (i >= j)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}