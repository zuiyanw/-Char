#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest, void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		while (count--)//前->后
		{
			*(char*)dest = *(char*)src;
			++(char*)src;
			++(char*)dest;
		}
	}
	else
	{
		while (count--)//后->前
		{
			*((char*)dest + count) = *((char*)src + count);//count递减 不需要再src++ dest++	
		}
	}
	return ret;
}
int main()
{
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	my_memmove(arr+7, arr, 16);
	return 0;
}