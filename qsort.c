#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef struct stu
{
	char name[20];
	int age;
}stu;
int cmp(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
int cmp_age(const void* e1, const void* e2)
{
	return ((stu*)e1)->age - ((stu*)e2)->age;
}
int cmp_name(const void* e1, const void* e2)
{
	return strcmp((stu*)e1, (stu*)e2);
}
void swap(char*buffer1,char*buffer2,int width)
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
void my_qsort(void* arr, int sz, int width, int (*cmp)(void*e1, void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
			{
				swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
			}
		}
	}

}
int main()
{
	int arr[] = { 6,1,9,78,23,15,23,5 };
	stu arr1[3] = { {"lisi",20},{"zhangsan",50},{"mazi",80} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),cmp);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}