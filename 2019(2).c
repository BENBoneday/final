#define _CRT_SECURE_NO_WARNINGS 1
#define N 3
#include<stdio.h>
typedef struct stu
{
	char stuNum[20];
	int math;
	int cScore;
}stu;
void Init(stu* stu)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d位学生信息(学号，数学成绩，c语言成绩)！\n", i + 1);
		scanf("%s%d%d", &stu[i].stuNum, &stu[i].math, &stu[i].cScore);
	}
}
void paixu(stu* stu)
{
	int i , j,temp;
	for (i = 0; i < N; i++)
	{
		for (j = N - 1; j > i; j--)
		{
			if (stu[j].cScore > stu[i].cScore)
			{
				temp = stu[j].cScore;
				stu[j].cScore = stu[i].cScore;
				stu[i].cScore = temp;
			}
		}
	}
	
	for (i = 0; i < N; i++)
	{
		if (stu[i].cScore == stu[0].cScore)
		{
			printf("c语言成绩最高的同学是\n");
			printf("学号为：%s\n数学成绩为:%d\nc语言成绩为：%d\n", stu[i].stuNum, stu[i].math, stu[i].cScore);
		}
		printf("\n");
	}
}
int main()
{
	stu stuArr[N];
	Init(stuArr);
	paixu(stuArr);
	return 0;
}