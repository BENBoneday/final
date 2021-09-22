#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
* 结构体的自引用
* 结构体vs默认内存对齐数是8(内存对齐是拿空间换取时间，减少cpu访问次数)
* 
* gcc没有默认内存对齐数，字节的整数倍
* 
* 设置默认对齐数----#pragam pack（对齐数）
* 
* 取消默认对齐数----#pragma pack（）

offsetof（结构体名，结构体成员）；不是函数，是一个宏，
          计算结构体中成员变量相对于首地址的偏移

头文件#include<stddef.h>
*/
#include<stddef.h>
typedef struct node
{
	char name[20];
	//struct node* next;
}node;
int main()
{
	int a, b;
	//node arr = {"asdasd"};
	printf("%d", offsetof(node, name));
	a = b = 0;
	return 0;
}