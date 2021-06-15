//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d%d", a, b);
//	//char arr1[] = "123";
//	//char arr2[] = "456";
//	////strcpy(arr2, arr1);
//	//memset(arr2,'g',6);
//	//printf("%s", arr2);
//	return 0;
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("****1.PLAY *****2.EXIT ******\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	int input = 0;
//	int random_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入：\n");
//		scanf("%d", &input);
//		if (random_num>input)
//		{
//			printf("猜小了！\n");
//		}
//		else if (random_num < input)
//		{
//			printf("猜大了！\n");
//		}
//		else 
//		{
//			printf("恭喜，猜中了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("请输入：\n");
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("请重新输入:\n");
//			break;
//		}
//	} 	while (input);
//		
//	return 0;
//}
