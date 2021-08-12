#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char judge(int score)
{
	switch (score/10)
	{
	case 9:
		return 'A';
		//break;
	case 8:
		return 'B';
		//break;
	case 7:
		return 'C';
	case 6:
		return 'D';
	case  (5 || 4 || 3 || 2 || 1 || 0):
		return 'E';
	default:
		return '0';
		//break;
		
	}
		
}
int main()
{
	int score = 0;
	char grade;
	scanf("%d",&score);
	grade = judge(score);
	if (grade == '0')
	{
		printf("Error Input!");
	}
	else printf("成绩是：%d\n等级为：%c", score, grade);
	return 0;
}