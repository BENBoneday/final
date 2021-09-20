#define _CRT_SECURE_NO_WARNINGS 1
/*
	memcpy（arr1，arr2，sizeof（arr1））函数；
	将arr2中的数据拷贝到arr1（处理重叠内存就可）
	memmove（）可处理重叠内存
*/
#include<stdio.h>
#include<string.h>
#include<assert.h>
struct stu
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* src, size_t Num)
{
	char* ret = dest;
	assert(dest&&src);
	while (Num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	struct stu arr[] = { {"zhangsan",30},{"lisi",50} };
	struct stu arr1[3] = { 0 };
	my_memcpy(arr1,arr,sizeof(arr));
	printf("%s %d", arr1[0].name, arr[0].age);
	return 0;
}