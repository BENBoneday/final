#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct poe
{
	char name[20];
	char sex;
	int age;
}poe;
int main()
{
	int i = 0;
	int man29=0,man59 = 0,man60 = 0;
	int women29 = 0,women59 = 0,women60 = 0;
	poe people[100];
	for (i = 0; i < 100; i++)
	{
		scanf("%s%c%d", people[i].name, people[i].sex, people[i].age);
	}
	for (i = 0; i < 100; i++)
	{
		if (people[i].age >= 0 && people[i].age <= 29)
		{
			if (people[i].sex == 'ÄÐ')
			{
				man29++;
			}
			if (people[i].sex == 'Å®')
			{
				women29++;
			}
		}
		if (people[i].age >30 && people[i].age <= 59)
		{
			if (people[i].sex == 'ÄÐ')
			{
				man59++;
			}
			if (people[i].sex == 'Å®')
			{
				women59++;
			}
		}
		if (people[i].age > 60)
		{
			if (people[i].sex == 'ÄÐ')
			{
				man60++;
			}
			if (people[i].sex == 'Å®')
			{
				women60++;
			}
		}
		printf("%d %d %d %d %d %d", man29, women29, man59, women59, man60, women60);
	}
	return 0;
}