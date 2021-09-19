#define _CRT_SECURE_NO_WARNINGS 1
/*
strtok（）函数：切割字符串
根据参数切割，将分割符替换为'\0'
*/

/*
strerror（错误码）；函数，返回错误信息的字符串
char* str=strettor（2）；参数可以是1,2,0,3等
errno是一个全局的错误码的变量，
当C语言的库函数在执行过程中，
发生了错误，就会将对应的错误码，赋值到errno中
故，char* str=strerror（errno）；可打印错误信息

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "192.168.1.1";
	char* p = ".69";
	char buf[1024] = { 0 };
	strcpy(buf,arr);
	char* ret=NULL;
	//strtok()函数的应用
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s ", ret);
	}
	return 0;
}