#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ѧ������ṹ��
//�����������������ڼ���֮ǰ��ת��Ϊ��ͨ����
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a=1,b=2,c=3;
	struct stu s1 = {"����",20,"2019010305"};//�ṹ�����s1������ʼ��
	//if (a > b, b > c)//���Ų�����
	// 	   
	//{
	//	
	//}
	struct stu * s = &s1;
	printf("%s\n", s1.name);
	printf("%s\n", (*s).name);
	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s1.id);
	printf("%d\n", s1.age);
	return 0;
}