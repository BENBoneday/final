//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Seqen(int arr[],int arr1[])
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 5; j > i; j--)
//		{
//			if (arr[j] > arr[i])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;		
//			}
//		}
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 5; j >= 0; j--)
//		{
//			if (arr1[j] == arr[i])
//			{
//				printf("第%d架飞机威胁值：%d\n",j+1, arr[i]);
//			}
//		}
//	}
//}
//void Input(int arr[],int arr1[])
//{
//	int i = 0;	
//	for (i = 0; i < 6; i++)
//	{
//		int temp = 0;
//		printf("请输入第%d架飞机的威胁程度值\n", i+1);
//		scanf("%d", &temp);
//		arr[i] = temp;
//		arr1[i] = temp;
//	}
//}
//int main()
//{
//	int arr[6] = {0};
//	int i = 0;
//	int arr1[6] = { 0 };
//	Input(arr,arr1);	
//	Seqen(arr,arr1);
//	return 0;
//}