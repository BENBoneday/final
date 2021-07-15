#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针在32位平台是4个字节，64位上是8个字节
//int main()
//{
	//int a = 0;
	//int* p = &a;
	//char* p1 = &a;
	//printf("%p\n", p);  // 0097FC7C
	//printf("%p\n", p+1); //0097FC80加一个整型

	//printf("%p\n", p1);  //0097FC7C
	//printf("%p\n", p1+1);//0097FC7D加一个char


	//指针是个变量，存放内存单元的地址
	//指针类型不同，解引用操作时能够访问的空间的大小不同
	//int*p：*p能访问4个字节
	//char*p：*p能访问1个字节
	//double*p：*p能访问8个字节
	//char*p：*p能访问1个字节

	//int arr[10] = { 0 };
	//int i = 0;
	////int* p = arr;
	//char* p = arr;//只能加一个字节
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = 1;
	//}
	//*p存的是arr第一个元素的地址
/*******************************************************************/
	//野指针
	//int a;//局部变量不初始化，默认是随机值
	//int *p;//局部的指针变量，就被初始化为随机值
	//指针越界会变成野指针，指针指向不是自己管理的内存
	//比如指针超过arr的范围

//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 30;
//	return 0;
//}