#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//插入排序练习
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int i, j;
//	for (i = 1; i < sz; i++)
//	{
//		int tmp = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//选择排序练习
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int i, j;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}

//冒泡排序练习
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//快速排序练习
//void quicksort(int* arr, int left, int right)
//{
//	if (left > right)
//		return;
//	int i = left, j = right;
//	int pivotkey = arr[left];
//	while (i < j)
//	{
//		while (i < j && arr[j] > pivotkey)
//			j--;
//		arr[i] = arr[j];
//		while (i < j && arr[i] < pivotkey)
//			i++;
//		arr[j] = arr[i];
//	}
//	arr[i] = pivotkey;
//
//	quicksort(arr, left, i - 1);
//	quicksort(arr, i + 1, right);
//}
//int main()
//{
//	int arr[10] = { 1,3,5,72,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	quicksort(arr, left, right);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}

//折半查找练习
//void quicksort(int* arr, int left, int right)
//{
//	if (left > right)
//		return;
//	int pivotkey = arr[left];
//	int i = left, j = right;
//	while (i < j)
//	{
//		while (i < j && arr[j] > pivotkey)
//			j--;
//		arr[i] = arr[j];
//		while (i < j && arr[i] < pivotkey)
//			i++;
//		arr[j] = arr[i];
//	}
//	arr[i] = pivotkey;
//
//	quicksort(arr, left, i - 1);
//	quicksort(arr, i + 1, right);
//}
//
//int search(int* arr, int sz, int k)
//{
//	int left = 0, right = sz - 1;
//	int mid = sz / 2;
//	while (left < right)
//	{
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,7,23,8,12,45,27,89,66,31,74,128,47 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	quicksort(arr, left, right);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int k = 89,ret = 0;
//	ret = search(arr, sz, k);
//	printf("%d\n", ret);
//	return 0;
//}
//
//1、构成单词的字符只有26个大写或小写英文字母；
//
//2、非构成单词的字符均视为单词间隔符；
//
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
//
//4、每个单词最长20个字母；

//int main()
//{
//	char str[200];
//	gets(str);
//	int len = strlen(str);
//	int p1 = len - 1, p2 = len;
//	while (p1 >= 0)
//	{
//		while (p1 >= 0 && !isalpha(str[p1]))
//			p1--;
//		p2 = p1;
//		while (p1 >= 0 && isalpha(str[p1]))
//			p1--;
//		for (int i = p1 + 1; i <= p2; i++)
//		{
//			printf("%c", str[i]);
//		}
//		printf(" ");
//	}
//	return 0;
//}




























