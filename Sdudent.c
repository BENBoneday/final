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
	printf("�������%d��ѧ����Ϣ��", i + 1);
	printf("ѧ������:\n");
	scanf("%s", &student->name);
	printf("ѧ��ѧ�ţ�\n");
	scanf("%s", &student->stuNum);
	printf("���ĳɼ���\n");
	scanf("%lf", &student->chinese);
	printf("��ѧ�ɼ���\n");
	scanf("%lf", &student->math);
	printf("Ӣ��ɼ���\n");
	scanf("%lf", &student->english);
	student->dat = (student->chinese + student->math + student->english) / 3.0;
}
void Save(stu* student)
{
	printf("ѧ��������%s\n",student->name);
	printf("ѧ��ѧ�ţ�%s\n",student->stuNum);
	printf("���ĳɼ���%lf\n",student->chinese);
	printf("��ѧ�ɼ���%lf\n",student->math);
	printf("Ӣ��ɼ���%lf\n",student->english);
	printf("ƽ���ɼ���%lf\n",student->dat);
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