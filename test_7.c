//#include<stdio.h>
//int binsry_search(int arr[],int search_num,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (mid > search_num)
//		{
//			right = mid;
//			right--;
//		}
//		if (mid < search_num)
//		{
//			left = mid;
//			left++;
//		}
//		if (mid == search_num)
//		{
//			return 1;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binsry_search(arr, k, sz);
//	if (ret == 1)
//	{
//		printf("找到了!\n");
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}