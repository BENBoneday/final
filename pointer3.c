#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/*回调函数*/
/*
qsort - 可以排序任意类型的数据
库函数


void* 可以是任意类型的指针，可以接收任意类型的地址
void* 不能进行解引用操作*p
void* 不能进行加减整数的操作

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