#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
* �ṹ���������
* �ṹ��vsĬ���ڴ��������8(�ڴ�������ÿռ任ȡʱ�䣬����cpu���ʴ���)
* 
* gccû��Ĭ���ڴ���������ֽڵ�������
* 
* ����Ĭ�϶�����----#pragam pack����������
* 
* ȡ��Ĭ�϶�����----#pragma pack����

offsetof���ṹ�������ṹ���Ա�������Ǻ�������һ���꣬
          ����ṹ���г�Ա����������׵�ַ��ƫ��

ͷ�ļ�#include<stddef.h>
*/
#include<stddef.h>
typedef struct node
{
	char name[20];
	//struct node* next;
}node;
int main()
{
	int a, b;
	//node arr = {"asdasd"};
	printf("%d", offsetof(node, name));
	a = b = 0;
	return 0;
}