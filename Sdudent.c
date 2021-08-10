#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct student
{
	char name[20];
	char stuNum[30];
	double chinese;
	double math;
	double english;
	double dat;
}stu;
void Input(stu* student)
{
	int i = 0;
	printf("请输入第%d个学生信息：", i + 1);
	printf("学生姓名:\n");
	scanf("%s", &student->name);
	printf("学生学号：\n");
	scanf("%s", &student->stuNum);
	printf("语文成绩：\n");
	scanf("%lf", &student->chinese);
	printf("数学成绩：\n");
	scanf("%lf", &student->math);
	printf("英语成绩：\n");
	scanf("%lf", &student->english);
	student->dat = (student->chinese + student->math + student->english) / 3.0;
}
void Save(stu* student)
{
	printf("学生姓名：%s\n",student->name);
	printf("学生学号：%s\n",student->stuNum);
	printf("语文成绩：%lf\n",student->chinese);
	printf("数学成绩：%lf\n",student->math);
	printf("英语成绩：%lf\n",student->english);
	printf("平均成绩：%lf\n",student->dat);
}
int main()
{
	stu s1;
	stu s2;
	stu s3;
	stu s4;
	stu s5;
	Input(&s1);
	Input(&s2);
	Input(&s3);
	Input(&s4);
	Input(&s5);
	Save(&s1);
	Save(&s2);
	Save(&s3);
	Save(&s4);
	Save(&s5);
	return 0;
}