#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//¿ìËÙÅÅÐòÁ·Ï°
//quicksort(int* arr, int left, int right)
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
//	arr[i] = pivotkey; //arr[j] = pivotkey
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

//Ã°ÅÝÅÅÐòÄ£Äâqsortº¯Êý
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void Swap(const void* buf1, const void* buf2,int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		char tmp = *((char*)buf1 + i);
// 		*((char*)buf1 + i) = *((char*)buf2 + i);
//		*((char*)buf2 + i) = tmp;
//	}
//}
//void Bubble_sort(void* base, int num, int size, int(*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	Bubble_sort(arr, sz, sizeof(int), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        int count = 1;
//        int tmp = arr[i];
//        for (int j = i + 1; j < n; j++)
//        {
//            if (tmp == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count % 2 == 1)
//        {
//            printf("%d\n", tmp);
//            break;
//        }
//    }
//    return 0;
//}


















