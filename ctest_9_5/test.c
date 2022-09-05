#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//合并两个有序数组
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 ,10,13,15},arr2[] = {2,4,6,8,10};
//	int len_arr1 = sizeof arr1 / sizeof(arr1[0]), len_arr2 = sizeof arr2 / sizeof(arr2[0]);
//	int i = 0, j = 0;
//	while (i < len_arr1 && j < len_arr2)
//	{
//		while (i < len_arr1 && j < len_arr2 && arr1[i] <= arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		while (i < len_arr1 && j < len_arr2 && arr2[j] < arr1[i])
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	//此时至少有一个有序数组已经遍历完，打印剩余的有序数组
//	if (i == (len_arr1 + 1))
//	{
//		for (; j < len_arr2; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < len_arr1; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}