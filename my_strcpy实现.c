#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)//destĿ�ĵ�  srcԴͷ
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//��srcָ����ַ�����destָ��Ŀռ���
	while (*dest++ = *src++)     //while (*src != '\0') �Ż�ǰ
	{
		;
	}							/*{
									*dest = *src;
										dest++;
										src++;
								}*/
	*dest = *src;
	return ret;//����Ŀ�Ŀռ����ʼ��ַ
}
int main()//��������ʱ���� ���ַ�������
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