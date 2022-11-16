#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strstr(char* p1, const char* p2)//p1   子串：p2  strstr返回的是一个地址或者是空指针
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;//p1由于const 被保护 这里强制类型转换一下
	if (*p2=='\0')//排除p2是空字符串 ""
	{
		return p1;
	}
	while (*cur!='\0')
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && *s1 == *s2)//理解形式：*s1 !== '\0'&&*s2 !== '\0'&& *s1 == *s2 s1！=='\0'为真 即s1为真 s1='\0'=0为假
		{
			s1++;
			s2++;
		}
		if (!*s2)//if(*s2=='\0')
		{
			return cur;//返回后 后面的不再执行
		}
		if (!*s1)////if(*s1=='\0')  针对s1=abc  s2=abcde  s2肯定不是s1的子串 
		{
			return NULL;//提前终止
		}
		cur++;//abbbcde  bbc bbb和bbc不同  cur在第一个b的位置 +1后从第二个b的位置重新查找
		
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
		printf("不存在\n");
	}
	else
	printf("%s\n", ret);
	return 0;
}