#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct-�ṹ��ؼ��� stu-�ṹ���ǩ   struct stu-�ṹ������
struct stu
{
	char name[20];
	//��Ա����
}s1,s2;//s1,s2��ȫ�ֱ���

//��һ��
typedef struct Stu
{
	//��Ա����
	char name[20];
	struct stu a;
}Stu;//�����ָ�ΪStu���Ϳ���ֱ�� Stu a��Ϊһ���ṹ�������
int main()
{
	struct stu b[10] = { "s" };
	Stu arr[20] = { "acv",{"nb"}};
	//struct stu b;
	printf("%s ", arr->a.name);
	return 0;
}
