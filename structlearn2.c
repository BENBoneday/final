#define _CRT_SECURE_NO_WARNINGS 1
/*
λ�Σ�����ṹ���Ա������Ҫ��bitλ
���Խ�ʡ�ڴ�
λ�β��ܿ�ƽ̨��
�磻
struct s
{
	int a : 20;//��Ҫ20������λ��������4���ֽڣ������char�Ļ���������ֽ�
	int b : 5 ;
	
};
*/
/*
	ö�٣�enum
*/
#include<stdio.h>
enum color
{
	red,
	green,
	blue
};
int main()
{
	enum color blue=2;
	printf("%d", blue);
	return 0;
}