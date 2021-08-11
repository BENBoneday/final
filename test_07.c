#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int counter(char* arr)
{
	char* temp = &arr;
	int count = 0;
	
	while ((*temp) != '\0')
	{
		if ((*temp) = ' ')
		{
			count++;
		}
		temp++;
	}
	return count;
}
int main()
{
	char arr[50];
	printf("请输入一行字符\n");
	scanf("%s", arr);
	int ret = counter(arr);
	printf("单词的个数是%d\n ", ret+1);
	return 0;
}