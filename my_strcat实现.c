#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)//destĿ�ĵ�  srcԴͷ
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//1.�ҵ�'/0'
	while (*dest!='\0') 
	{
		dest++;
	}
	//����src��dest
	while (*dest++ = *src++)
	{
		;
	}//dest abcdefg g����ȫ��'/0' ���Կ���֮����Ҫ�ٿ���'\0'
	/**dest = *src;*/
	return ret;//����Ŀ�Ŀռ����ʼ��ַ
}
int main()//��������ʱ���� ���ַ�������
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