#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)//dest目的地  src源头
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//1.找到'/0'
	while (*dest!='\0') 
	{
		dest++;
	}
	//拷贝src到dest
	while (*dest++ = *src++)
	{
		;
	}//dest abcdefg g后面全是'/0' 所以拷贝之后不需要再拷贝'\0'
	/**dest = *src;*/
	return ret;//返回目的空间的起始地址
}
int main()//不创建临时变量 求字符串长度
{
	char arr1[30] = "abcdefg";
	char arr2[] = "ABC";
	char arr3[30] = "ABCdef";
	char arr4[] = "abcde";
	int ret = my_strcat(arr1, arr2);
	strcat(arr3, arr4);
	printf("%s\n", arr1);
	printf("%s\n", arr3);
	return 0;
}