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
	printf("�ܻ��� %d ", milk->volume);
	printf("Ʒ���� %s ", milk->brand);
	printf("ζ���� %s ", milk->flavor);

}
int main()
{
	milk sweetmilk = { 250,"Ũţ�̣�","������" };
	print(&sweetmilk);
	return 0;
}