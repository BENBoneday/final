#define _CRT_SECURE_NO_WARNINGS 1
/*
* strcmp(字符串1的地址，字符串2的地址)；1和2进行比较
* 1>2  return >0
* 1<2  return <0
* 1=2  return =0
* 
*/
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1-*str2);
}
int main()
{
	char* p1 = "sdasdas";
	char* p2 = "dasasd";
	int ret = my_strcmp(p1, p2);
	printf("%d", ret);
	return 0;
}