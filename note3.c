#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/*
1.ջ����Ĭ��ʹ��
  ��ʹ�øߵ�ַ���Ŀռ�
  ��ʹ�õ͵�ַ���Ŀռ�
  2.
  ���������±������
  ��ַ���ɵ͵��߱仯
  */
char* my_strcpy(char* dest,const char* src)

//const������java���final
{

	/*const����ָ�������*���ʱ
	�����ε���*p������ͨ��p�ı�*p��num����ֵ
	����const int* p=&num; ��ʱ��num��ֵ���ɸı�

	const����ָ�������*�ұ�ʱ��
	���ε���ָ�����p����p���ܱ��ı�
	����int* const p=&num; ��ʱ��num�ĵ�ַ���ɸı�

	*/
	assert(dest != NULL);//���� �൱��java�������쳣
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[] = "????$$$$$$$$$";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}