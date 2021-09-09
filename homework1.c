#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void print(char* a,int sz)
{
	char* left = a;
	char* right = a + sz-1;
	char temp;
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	
}
int main()
{
	char a[] = "acxxfbfgfb";
	int sz = strlen(a);
	
	print(a,sz);
	printf("%s", a);
	return 0;
}