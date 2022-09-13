#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

////ģ��ʵ��memcpy
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

////ģ��ʵ��memmove
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
//	//��������Ҫ��arr1�е�ǰ�벿�ֿ�����arr2�У�ʹ��memcpy
//	memcpy(arr2, arr1, sizeof(arr1) / 2);//����20���ֽ�
//	printf("������:\n");
//	for (int i = 0; i < sizeof(arr1) / (2 * sizeof(int)); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

////ģ��ʵ��memcpy()����
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
//	//�����������1 2 3 4 5 ������3 4 5 6 7��λ��
//	memmove(arr + 2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////ģ��ʵ��memmove()����
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//���ԣ���ֹ�����ָ��
//	assert(dest && src);
//	void* p = dest;//��¼��ʼ��ַ
//	//Ŀ�ĵ�ַ�ȿ���ԭʼ��ַСʱ���������ҿ���
//	//�������Ա�֤����ʱ�����ݸ����ǵ�
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)src);
//			(char*)dest = (char*)dest + 1;
//			(char*)src = (char*)src + 1;
//		}
//	}
//	else //��֮�������󿽱�
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