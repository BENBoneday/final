#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int num)
{
	int i = 0;
	int shang = 1;
	int qu = 1;
	int count = 0;
	int arr[32] = { 0 };
	printf("��ӡż��λ��\n");
	while (shang != 0)
	{
		shang = num / 2;
		qu = num % 2;
		if ((count % 2) == 0 || count == 0)
		{
			arr[count] = qu;
		}
		count++;
		num = shang;
	}
	for (i = 0; i < 32; i+=2)
	{
		printf("%d ", arr[30-i]);
	}
	printf("\n");
}
void print1(int num)
{
	int i = 0;
	int arr[32] = { 0 };
	int shang = 1;
	int qu = 1;
	int count = 0;
	printf("��ӡ����λ��\n");
	while (shang != 0)
	{
		shang = num / 2;
		qu = num % 2;
		if (((count % 2) != 0)&&count!=0)
		{
			arr[count] = qu;
			
		}
		count++;
		num = shang;
	}
	for (i = 0; i < 32; i+=2)
	{
		printf("%d ", arr[31-i]);
	}
}
int main()
{
	int num = 0;
	printf("����һ������");
	scanf("%d", &num);
	print(num);
	print1(num);
	return 0;
}