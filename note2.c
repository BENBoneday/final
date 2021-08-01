#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct milk
{
	int volume  ;
	char flavor[20] ;
	char brand[20] ;
}milk;
void print(milk *milk)
{
	printf("溶积是 %d ", milk->volume);
	printf("品牌是 %s ", milk->brand);
	printf("味道是 %s ", milk->flavor);

}
int main()
{
	milk sweetmilk = { 250,"浓牛奶！","伊利！" };
	print(&sweetmilk);
	return 0;
}