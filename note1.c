#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct-结构体关键字 stu-结构体标签   struct stu-结构体类型
struct stu
{
	char name[20];
	//成员变量
}s1,s2;//s1,s2是全局变量

//另一种
typedef struct Stu
{
	//成员变量
	char name[20];
	struct stu a;
}Stu;//把名字改为Stu，就可以直接 Stu a；为一个结构体变量了
int main()
{
	struct stu b[10] = { "s" };
	Stu arr[20] = { "acv",{"nb"}};
	//struct stu b;
	printf("%s ", arr->a.name);
	return 0;
}
