#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Init(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}
void Test(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] =i;
	}
}
void print(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[],int len)
{
	int i = 0;
	int left = 0;
	int right = len;
	while (left<right)
	{
		
		right = len - left;
		int temp = 0;
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		//printf("\n");
		left++;
	}
}
int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr);
	print(arr);
	Test(arr);
	printf("\n");
	print(arr);
	reverse(arr,len-1);
	printf("\n");
	print(arr);
	return 0;
}
