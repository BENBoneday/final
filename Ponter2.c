#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* pa = NULL;
//	//NULL ������ʼ��ָ�룬��ָ�븳ֵ��
//	//���ָ���ڴ汻�ͷ��ˣ��ɽ�����Ϊ��
//	if (pa != NULL)
//	{
//		//���ָ�벻Ϊ�գ��������
//		*pa = 20;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	printf("%d ", &arr[9] - &arr[0]);
//	//ָ���ָ��õ��м�Ԫ�صĸ���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//ָ��ɼӼ�����   
//	return 0;
//}
int strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (end != '\0')
	{
		end++;
	}
	return end-start;
}
int main()
{
	char arr[] = "bit";
	int len = strlen(arr);
	printf("%d ", len);
	return 0;
}
