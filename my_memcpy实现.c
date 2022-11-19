#include <stdio.h> 
#include <assert.h> 
void* my_memcpy(void* dest, void* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
void print(int arr2[5], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}
struct stu
{
	char name[20];
	int age[20];
};
void print1(struct stu* p)
{
	printf("%s\n", p->name);
	printf("%d\n", *(p->age));
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	struct stu s1 = { "zhangsan", 20 };
	struct stu s2 = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	print(arr2, sz);
	my_memcpy(&s2, &s1, sizeof(s1));
	print1(&s2);
	return 0;
}