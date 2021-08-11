#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct staff
{
	char name[20];
	int num;
}staff;
int arr[10];
int count = 0;
void Input(staff* staff)
{
	printf("请输入员工姓名\n");
	scanf("%s", &staff->name);
	printf("请输入工资号\n");
	scanf("%d", &staff->num);
	arr[count] = staff->num;
	count++;
}
void paixu(staff* s1, staff* s2, staff* s3, staff* s4, staff* s5, staff* s6, staff* s7, staff* s8, staff* s9, staff* s10)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (s1->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s1->name, s1->num);
		}
		if (s2->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s2->name, s2->num);
		}if (s3->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s3->name, s3->num);
		}if (s4->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s4->name, s4->num);
		}if (s5->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s5->name, s5->num);
		}if (s6->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s6->name, s6->num);
		}if (s7->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s7->name, s7->num);
		}if (s8->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s8->name, s8->num);
		}if (s9->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s9->name, s9->num);
		}if (s10->num == arr[i])
		{
			printf("姓名：%s  工资号：%d\n", s10->name, s10->num);
		}
	}
}
int main()
{
	staff s1;
	staff s2;
	staff s3;
	staff s4;
	staff s5;
	staff s6;
	staff s7;
	staff s8;
	staff s9;
	staff s10;
	//staff s1;
	Input(&s1);
	Input(&s2);
	Input(&s3);
	Input(&s4);
	Input(&s5);
	Input(&s6);
	Input(&s7);
	Input(&s8);
	Input(&s9);
	Input(&s10);
	paixu(&s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8, &s9, &s10);
	return 0;
}