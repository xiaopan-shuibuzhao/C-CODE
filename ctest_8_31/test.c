#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//≤Â»Î≈≈–Ú
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

//int main()
//{
//	int arr[10] = { 4,8,52,7,3,59,14,25 };
//	/*int sz = sizeof arr / sizeof(arr[0]);*/
//	int sz = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i])
//		{
//			sz++;
//		}
//	}
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

//—°‘Ò≈≈–ÚC”Ô—‘ µœ÷
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	for (int i = 0;i < sz - 1; i++)
//	{
//		for (int j = i + 1; j < sz; j++)
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
//}

//øÏÀŸ≈≈–ÚÀ„∑® µœ÷
//void quicksort(int* arr, int left, int right)
//{
//	if (left > right)
//		return;
//	int pivot = arr[left];
//	int i = left, j = right;
//	while (i < j)
//	{
//		while (i < j && arr[j] > pivot)
//			j--;
//		arr[i] = arr[j];
//		while (i < j && arr[i] < pivot)
//			i++;
//		arr[j] = arr[i];
//	}
//	arr[i] = pivot;
//
//	quicksort(arr, left, i - 1);
//	quicksort(arr, i + 1, right);
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,34,98,2,4,78,10,9 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	quicksort(arr, left, right);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//øÏÀŸ≈≈–ÚÀ„∑®¡∑œ∞

//void quicksort(int* arr, int left, int right)
//{
//	if (left >= right)
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
//	arr[j] = pivotkey;
//
//	quicksort(arr, left, i - 1);
//	quicksort(arr, i + 1, right);
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	quicksort(arr, left, right);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//—°‘Ò≈≈–Ú¡∑œ∞ ∫Õ¥Ú¿ﬁÃ®¿‡À∆
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
//}

//—°‘Ò≈≈–Ú¡∑œ∞
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,20 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = i + 1; j < sz; j++)
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
//}

//≤Â»Î≈≈–Ú¡∑œ∞
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int i, j;
//	for (i = 1; i < sz; i++)
//	{
//		int tmp = arr[i];
//		for (j = i - 1; j >= 0, arr[j] > tmp; j--)
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



























