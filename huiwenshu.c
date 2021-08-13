#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* judge(char* arr,int sz)
{
	char wrong[20] = "NO";
	char right[20] = "YES";
	int i = 0;
	//char sz1 = (char)(sz - 1);
	char* temp=arr+(char)(sz-1);
	//temp = arr+(char)2;
	while (temp > arr)
	{
		if ((*arr) == (*temp))
		{
			arr++;
			temp--;
		}
		else
		{
			return wrong;
		}
	}
	return right;
}
int main()
{
	char arr[20];
	//char arr1[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£¡\n");
	scanf("%s", arr);
	int sz = strlen(arr);	
	printf("%s", judge(arr, sz));
	return 0;
}