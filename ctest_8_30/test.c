#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//ð������ģ��qsort()����
//int cmp(int* e1,int* e2)
//{
//	return *e1 - *e2;
//}
//
//void Swap(void* buf1, void* buf2, int width)//����һ���ֽ�һ���ֽڽ���
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *((char*)buf1 + i);
//		*((char*)buf1 + i) = *((char*)buf2 + i);
//		*((char*)buf2 + i) = tmp;
//	}
//}
//
//void my_qsort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void quicksort(int* arr, int left, int right)
//{
//	if (left >= right)//ȷ�������������
//		return;
//	int pivotkey = arr[left];
//	int i = left, j = right;
//
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
//int main()
//{
//	int arr[10] = { 5,2,3,1,4,7,6,9,10,8 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	quicksort(arr, left, right);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
//
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1 + 2 + 4 + 7 + 14 = 28��
//
//����n�������n����(��n)��ȫ���ĸ�����

//int main()
//{
//	int n = 0,k = 0,Pfnb = 0;
//	scanf("%d", &n);
//	//��һ�����Ĺ�Լ��
//	for (k = 2; k <= n; k++)
//	{
//		int arr[200] = { 1 }, count = 1,sum = 0;
//		for (int j = 2; j < sqrt(k); j++)
//		{
//			if (!(k % j))
//			{
//				arr[count++] = j;
//				arr[count++] = k / j;
//			}
//		}
//		for (int i = 0; i < count; i++)
//		{
//			sum += arr[i];
//		}
//		if (k == sum)
//		{
//			Pfnb++;
//		}
//	}
//	printf("%d\n", Pfnb);
//	return 0;
//}

//int main()
//{
//    int n = 0, count = 0;
//    scanf("%d", &n);
//    int str[20] = {0};
//    while (n / 10)
//    {
//        str[count++] = (n % 10);
//        n = n / 10;
//    }
//    str[count] = n % 10;
//    for (int i = 0; i <= count; i++)
//    {
//        printf("%d", str[i]);
//    }
//    return 0;
//}
int main() 
//{
//    int num = 0;
//    scanf("%d\n", &num);
//    if (num == 0) printf("%c", '0');
//    while (num != 0) 
//    {
//        printf("%c", num % 10 + '0');//char �� int �������Ϳɽ�int����ת��Ϊchar����
//        num /= 10;
//    }
//    printf("\n");
//    return 0;
//}
//













