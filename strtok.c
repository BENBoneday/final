#define _CRT_SECURE_NO_WARNINGS 1
/*
strtok�����������и��ַ���
���ݲ����и���ָ���滻Ϊ'\0'
*/

/*
strerror�������룩�����������ش�����Ϣ���ַ���
char* str=strettor��2��������������1,2,0,3��
errno��һ��ȫ�ֵĴ�����ı�����
��C���ԵĿ⺯����ִ�й����У�
�����˴��󣬾ͻὫ��Ӧ�Ĵ����룬��ֵ��errno��
�ʣ�char* str=strerror��errno�����ɴ�ӡ������Ϣ

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "192.168.1.1";
	char* p = ".69";
	char buf[1024] = { 0 };
	strcpy(buf,arr);
	char* ret=NULL;
	//strtok()������Ӧ��
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s ", ret);
	}
	return 0;
}