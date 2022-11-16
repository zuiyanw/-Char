#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)//dest目的地  src源头
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//将src指向的字符串在dest指向的空间中
	while (*dest++ = *src++)     //while (*src != '\0') 优化前
	{
		;
	}							/*{
									*dest = *src;
										dest++;
										src++;
								}*/
	*dest = *src;
	return ret;//返回目的空间的起始地址
}
int main()//不创建临时变量 求字符串长度
{
	char arr1[] = "abcdefg";
	char arr2[] = "ABC";
	char arr3[] = "ABCdef";
	char arr4[] = "abcde";
	int ret = my_strcpy(arr1, arr2);
	strcpy(arr3, arr4);
	printf("%s\n", arr1);
	printf("%s\n", arr3);
	return 0;
}