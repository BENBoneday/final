#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int i = 0;
	/*int* pa = &a;
	int** ppa = &pa;*///ppa二级指针
	//int* *中：后一个*表示ppa指针指向pa，前一个int*表示pa是int*类型的
	int* arr[3] = { &a,&b,&c };
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	//指针数组：数组，存放指针的数组
	//数组指针：指针，
	return 0;
}