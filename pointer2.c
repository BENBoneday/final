#define _CRT_SECURE_NO_WARNINGS 1
/*
�ص��������Ѻ���ָ����Ϊ����int ��*pr����int��int��������һ������
*/
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*** 0 �˳� ******* 1 �ӷ� ***\n");
	printf("*** 2 ���� ******* 3 �˷� ***\n");
	printf("*** 4 ���� ******* ****** ***\n");
}
int main()
{
	int input = 0;
	int ret = 0;
	int (*pr[5])(int, int) = { 0,add,sub,mul,div };
	while (1)
	{
		menu();
		printf("�����룡\n");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			int x, y;
			printf("������������ ");
			scanf("%d%d", &x, &y);
			ret = pr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳���");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	return 0;
}