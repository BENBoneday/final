#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 3
typedef struct stu
{
	char string[20];
}stu;
int cmp_string(const void* e1, const void* e2)
{
	return strcmp((stu*)e1, (stu*)e2);
}
void swap(char* buffer1, char* buffer2, int width,int Num)
{
	char temp;
	int i;
	for (i = 0; i < width; i++)
	{
		temp = *buffer1;
		*buffer1 = *buffer2;
		*buffer2 = temp;
		buffer1++;
		buffer2++;
	}
}
void sort(void* arr, int sz, int width, int (*cmp_string)(void* e1, void* e2),int Num)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (Num == 1)
			{
				if (cmp_string((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
				{
					swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width, Num);
				}
			}
			if (Num == 0)
			{
				if (cmp_string((char*)arr + j * width, (char*)arr + (j + 1) * width) < 0)
				{
					swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width, Num);
				}
			}
		}
	}
}
int main()
{
	stu arr[N];
	int i;
	int Num;
	for (i = 0; i < N; i++)
	{
		printf("ÇëÊäÈë×Ö·û´®\n");
		scanf("%s", arr[i].string);
	}
	printf("µÝÔö°´1£¬µÝ¼õ°´0\n");
	scanf("%d", &Num);
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz, sizeof(arr[0]), cmp_string,Num);
	for (i = 0; i < N; i++)
	{
		printf("×Ö·û´®ÅÅÐòÎª£º%s\n", arr[i].string);
	}
	return 0;
}