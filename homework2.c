//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
////unsigned int ���-1����λ������
//int twotype(unsigned int num)
//{
//	int count = 0;
//	int merchant=1;
//	int remainder=1;
//	while (merchant)
//	{
//		merchant = num / 2;
//		remainder = num % 2;
//		if (remainder == 1)
//		{
//			count++;
//		}
//		num = merchant;
//	}
//	return count;
//
//}
////����2
//int twotype2(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//}
//
////������
//int twotype3(int num)
//{
//	int count = 0;
//
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("input!\n");
//	scanf("%d", &num);
//	
//	int res = twotype(num);
//	printf("%d ", res);
//	//system("pause");//��ͣ����
//	return 0;
//}