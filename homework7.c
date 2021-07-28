#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double ci(int num,int k)
{
	
	if (k > 0)
	{
		return (num * ci(num,k-1));
	}
	else if (k == 0)
	{
		return 1;
	}
	else if (k < 0)
	{
		return (1 / (num * ci(num, (-k) - 1)));
	}

}
int main()
{
	int num = 0;
	int k = 0;
	printf("ÇëÊäÈë2¸öÊý£¡\n");
	scanf("%d%d", &num,&k);
	double res = ci(num,k);
	printf("%lf ", res);
	return 0;
}