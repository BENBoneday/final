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
	printf("������һ���ַ�\n");
	scanf("%s", arr);
	int ret = counter(arr);
	printf("���ʵĸ�����%d\n ", ret+1);
	return 0;
}