#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* pa = NULL;
//	//NULL 用来初始化指针，给指针赋值，
//	//如果指针内存被释放了，可将其置为空
//	if (pa != NULL)
//	{
//		//如果指针不为空，存放有用
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
//	//指针减指针得到中间元素的个数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//指针可加减整数   
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
