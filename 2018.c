#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void copy(char* arr,char* arr2)
{
	while (*arr != '\0')
	{
		if (*arr > '0' && *arr<'9')
		{
			
		}
		else 
		{
			*arr2 = *arr;
			arr2++;
		}
		arr++;
	}
}
int main()
{
	char arr[20] = {0};
	char arr2[20] = {0};
	scanf("%s", arr);
	copy(arr,arr2);
	printf("%s", arr2);
	return 0;
}