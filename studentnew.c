#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stu
{
	char name[20];
	int score;
}stu;
int cmp(const void* e1, const void* e2)//ÅÅÃû×Ö
{
	return strcmp((stu*)e1, (stu*)e2);
}
int cmp_age(const void* e1, const void* e2)//ÅÅ·ÖÊý
{
	return (((stu*)e1)->score) - (((stu*)e2)->score);
}
int main()
{
	stu arr[3] = { {"li",53},{"wang",80},{"rao",100} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_age);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("name:%s,score:%d", arr[i].name, arr[i].score);
	}
	return 0;
}