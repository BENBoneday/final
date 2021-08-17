#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct student
{
	char name[20];
	double chinese;
	double math;
	double english;
	double averge;
}stu;
void print(stu* s1, stu* s2, stu* s3, stu* s4, double arr[])
{
	arr[0] = s1->averge;
	arr[1] = s2->averge;
	arr[2] = s3->averge;
	arr[3] = s4->averge;
	if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3])
	{
		printf("姓名：%s，语文成绩：%lf，数学成绩：%lf，英语成绩：%lf", s1->name, s1->chinese, s1->math, s1->english );
	}
	if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3])
	{
		printf("姓名：%s，语文成绩：%lf，数学成绩：%lf，英语成绩：%lf", s2->name, s2->chinese, s2->math, s2->english);
	}if (arr[2] > arr[1] && arr[2] > arr[0] && arr[2] > arr[3])
	{
		printf("姓名：%s，语文成绩：%lf，数学成绩：%lf，英语成绩：%lf", s3->name, s3->chinese, s3->math, s3->english);
	}if (arr[3] > arr[1] && arr[3] > arr[2] && arr[3] > arr[0])
	{
		printf("姓名：%s，语文成绩：%lf，数学成绩：%lf，英语成绩：%lf", s4->name, s4->chinese, s4->math, s4->english);
	}
}
int main()
{
	double arr[4];
	stu s1 = { "zhao",97.5,69.0,78.0 ,(97.5+ 69.0+ 78.0)/3};
	stu s2 = { "qian",80.0,93.0,87.5 ,(80.0 + 93.0 + 87.5)/3 };
	stu s3 = { "sun",75.0,89.5,68.5 ,(75.0+ 89.5+ 68.5)/3};
	stu s4 = { "li",72.5,68.5,54.0 ,(72.5+ 68.5+ 54.0)/3};
	print(&s1, &s2, &s3, &s4,arr);
	return 0;
}