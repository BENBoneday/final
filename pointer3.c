#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/*�ص�����*/
/*
qsort - ���������������͵�����
�⺯��


void* �������������͵�ָ�룬���Խ����������͵ĵ�ַ
void* ���ܽ��н����ò���*p
void* ���ܽ��мӼ������Ĳ���

*/
int cmp(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 - *(float*)e2));
}
int main()
{
	float arr[5] = { 32.0,33.0,55.0,66.0,77.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	return 0;
}