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
		printf("�������%dλѧ����Ϣ(ѧ�ţ���ѧ�ɼ���c���Գɼ�)��\n", i + 1);
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
			printf("c���Գɼ���ߵ�ͬѧ��\n");
			printf("ѧ��Ϊ��%s\n��ѧ�ɼ�Ϊ:%d\nc���Գɼ�Ϊ��%d\n", stu[i].stuNum, stu[i].math, stu[i].cScore);
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