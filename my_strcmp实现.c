#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int my_strcmp(char* str1, char* str2)//
{
	assert(str1 && str2);//str1!=NULL str2!=NULL 
	//������ �Ƚ���һ���ַ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0')//*str1��'\0'  *str2Ҳ��'\0'
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//�Ƚ�
	if (*str1 > *str2)
		return 1;
	else
		return -1;

}
int main()//
{
	char arr1[] = "abcd";
	char arr2[] = "abcd";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}