#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//学生对象结构体
//整型提升：短整型在计算之前会转换为普通整型
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a=1,b=2,c=3;
	struct stu s1 = {"张三",20,"2019010305"};//结构体对象s1，并初始化
	//if (a > b, b > c)//逗号操作符
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