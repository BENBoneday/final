#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void leftString(char* str,int Num,int len)
//{
//	
//	while (Num != 0)
//	{
//		*(str + (char)len)=*str;
//
//		str++;
//		Num--;
//	}
//	printf("%s\n", str);
//}
void reverse(char* left,char*right)
{
	assert(left!=NULL);
	assert(right!=NULL);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void leftString(char* str, int Num, int len)
{
	assert(str!=NULL);
	assert(Num <= len - 1);
	reverse(str, str + Num - 1);//×ó±ß½»»»1
	reverse(str + Num, str + len - 1);
	reverse(str, str + len - 1);
}
int main()
{
	char str[50] = {0};
	scanf("%s", str);
	
	int Num;
	scanf("%d", &Num);
	int len = strlen(str);
	leftString(str,Num,len);
	printf("%s", str);
	return 0;
}