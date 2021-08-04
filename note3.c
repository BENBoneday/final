#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/*
1.栈区的默认使用
  先使用高地址处的空间
  在使用低地址处的空间
  2.
  数组随着下标的增长
  地址是由低到高变化
  */
char* my_strcpy(char* dest,const char* src)

//const类似于java里的final
{

	/*const放在指针变量的*左边时
	，修饰的是*p，不能通过p改变*p（num）的值
	即，const int* p=&num; 此时，num的值不可改变

	const放在指针变量的*右边时，
	修饰的是指针变量p本身，p不能被改变
	即，int* const p=&num; 此时，num的地址不可改变

	*/
	assert(dest != NULL);//断言 相当于java的上抛异常
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[] = "????$$$$$$$$$";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}