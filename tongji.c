#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void tongji(char* arr)
{
	int word = 0;
	int kong = 0;
	int num = 0;
	int other = 0;
	while (*arr != '\0')
	{
		if (*arr >= 'A' && *arr <= 'Z' || *arr>='a' && *arr <= 'z')
		{
			word++;
		}
		else if (*arr == ' ')
		{
			kong++;
		}
		else if (*arr >= '0' && *arr <= '9')
		{
			num++;
		}
		else
		{
			other++;
		}
		arr++;
	}
	printf("字母是%d个，空格是%d个，数字是%d个，其它字符是%d个", word, kong, num, other);
}
int main()
{
	char arr[50];
	scanf("%[^\n]", arr);
	tongji(arr);
	return 0;
}