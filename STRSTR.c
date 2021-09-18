#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
	assert(p1!=NULL);
	assert(p2!=NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	const char* str1 = "sdadsasdf";
	const char* str2 = "dsa";
	char* ret = my_strstr(str1,str2);
	if (ret == NULL)
	{
		printf("NO");
	}
	else printf("%s", ret);
	return 0;
}