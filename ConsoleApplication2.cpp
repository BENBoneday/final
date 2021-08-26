//#define 
#include<math.h>
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main()
{   //字符从两边到中间
	
	char arr1[] = "i am the king of the world!";
	char arr2[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");

		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//				
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", password);
//	//gets_s(password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认");
//	if ((ret = getchar()) == 'Y')
//	{
//		printf("对");
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("错");
//	}
//	return 0;
//}
