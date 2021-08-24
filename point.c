#define _CRT_SECURE_NO_WARNINGS 1
/*
指针数组：存放指针的数组
int*  p[20];

数组指针：指向数组的指针-存放数组的地址
int (*p)[10]=&arr;
数组指针
arr 首元素地址
&arr[0] 首元素地址
&arr 数组的地址

int *parr1[10];     parr1是一个数组，数组有10个元素，每个元素的类型是int*，
                    parr1是指针数组

int (*parr2)[10];   parr2是一个指针，该指针指向一个数组，数组有10个元素。
                    每个元素的类型是int，parr2是数组指针

int (*parr3[10])[5]; 是一个数组，该数组有10个元素，每个元素是一个数组指针
                     该指针指向的数组有5个元素，每个元素是int

void test(int (*arr)[5])
{}
int arr[3][5];
test(arr);


二级指针存放一级指针的地址


函数指针：指向函数的指针
int (*pa)(int,int)=add;//add是函数名
前面的int是返回类型，后面的是参数类型
调用：

(*pa)(2,3);pa是函数的地址

(*(void(*)())0)(); void(*)()函数指针类型

0是函数的地址（强制转换）
再调用0地址的函数

typedef void(*pfun)(int);重命名函数


typedef unsigned int uint;重命名

函数指针数组：
int(*arr[4])(int,int)={add,sub,mul,div};


*/