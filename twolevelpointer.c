#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int i = 0;
	/*int* pa = &a;
	int** ppa = &pa;*///ppa����ָ��
	//int* *�У���һ��*��ʾppaָ��ָ��pa��ǰһ��int*��ʾpa��int*���͵�
	int* arr[3] = { &a,&b,&c };
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	//ָ�����飺���飬���ָ�������
	//����ָ�룺ָ�룬
	return 0;
}