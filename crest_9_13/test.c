#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

////模拟实现memcpy
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	while (num--)
//	{
//		*((char*)dest) = *((char*)src);
//		(char*)dest = (char*)dest + 1;
//		(char*)src = (char*)src + 1;
//	}
//	return p;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	int* ret = (int*)my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < (20 / sizeof(int)); i++)
//	{
//		printf("%d  ", ret[i]);
//	}
//
//	/*char str1[] = "abcdefghij";
//	char str2[20] = "a";*/
//	/*char* ret = (char*)my_memcpy(str2, str1, 5);*/
//	/*my_memcpy(str2, str1, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", str2[i]);
//	}*/
//	return 0;
//}

////模拟实现memmove
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)src);
//			(char*)dest = (char*)dest + 1;
//			(char*)src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memmove(arr2, arr1, 20);
//	/*int* ret = my_memmove(arr2, arr1, 20);*/
//	for (int i = 0; i < 20 / sizeof(int); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	/*for (int i = 0; i < 20 / sizeof(int); i++)
//	{
//		printf("%d ", ret[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10];
//	//现在我们要将arr1中的前半部分拷贝到arr2中，使用memcpy
//	memcpy(arr2, arr1, sizeof(arr1) / 2);//拷贝20个字节
//	printf("拷贝后:\n");
//	for (int i = 0; i < sizeof(arr1) / (2 * sizeof(int)); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

////模拟实现memcpy()函数
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* p = dest;
//	while (num--)
//	{
//		*((char*)dest) = *((char*)src);
//		(char*)dest = (char*)dest + 1;
//		(char*)src = (char*)src + 1;
//	}
//	return p;
//}
//int main()
//{
//	char str1[] = "hello world!";
//	char str2[10] = "xxxxxxxxx";
//	my_memcpy(str2, str1, 5);
//	printf("%s\n", str2);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//这里我们想把1 2 3 4 5 拷贝到3 4 5 6 7的位置
//	memmove(arr + 2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////模拟实现memmove()函数
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//断言，防止传入空指针
//	assert(dest && src);
//	void* p = dest;//记录起始地址
//	//目的地址比拷贝原始地址小时，从左往右拷贝
//	//这样可以保证拷贝时把数据给覆盖掉
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)src);
//			(char*)dest = (char*)dest + 1;
//			(char*)src = (char*)src + 1;
//		}
//	}
//	else //反之从右往左拷贝
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}