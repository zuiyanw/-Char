#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strstr(char* p1, const char* p2)//p1   �Ӵ���p2  strstr���ص���һ����ַ�����ǿ�ָ��
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;//p1����const ������ ����ǿ������ת��һ��
	if (*p2=='\0')//�ų�p2�ǿ��ַ��� ""
	{
		return p1;
	}
	while (*cur!='\0')
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && *s1 == *s2)//�����ʽ��*s1 !== '\0'&&*s2 !== '\0'&& *s1 == *s2 s1��=='\0'Ϊ�� ��s1Ϊ�� s1='\0'=0Ϊ��
		{
			s1++;
			s2++;
		}
		if (!*s2)//if(*s2=='\0')
		{
			return cur;//���غ� ����Ĳ���ִ��
		}
		if (!*s1)////if(*s1=='\0')  ���s1=abc  s2=abcde  s2�϶�����s1���Ӵ� 
		{
			return NULL;//��ǰ��ֹ
		}
		cur++;//abbbcde  bbc bbb��bbc��ͬ  cur�ڵ�һ��b��λ�� +1��ӵڶ���b��λ�����²���
		
	}
	return NULL;
	
}
int main()
{
	char arr1[30] = "abbbcdef";
	char arr2[] = "bbce";
	char* ret = my_strstr(arr1, arr2);
	if (ret==NULL)
	{
		printf("������\n");
	}
	else
	printf("%s\n", ret);
	return 0;
}