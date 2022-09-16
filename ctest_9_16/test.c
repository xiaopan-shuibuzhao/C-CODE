#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


////kmp算法实现
//void my_next(int* next, const char* str2, int len)
//{
//	int j = 1, k = 0;
//	next[0] = -1;
//	next[1] = 0;
//	while (j < len)
//	{
//		if (k == -1 || str2[j] == str2[k])
//		{
//			j++;
//			k++;
//			next[j] = k;
//		}
//		else
//		{
//			k = next[k];
//		}
//	}
//}
//int KMP(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	int len = (int)strlen(str2);
//	int i = 0, j = 0;
//	int* next = (int*)malloc(sizeof(int) * len);
//	*next = '\0';
//	/*int next[100] = { 0 };*/
//	assert(next);
//	my_next(next, str2, len);
//	/*for (int i = 0; i < len; i++)
//	{
//		printf("%d ", next[i]);
//	}*/
//	while (str2[j])
//	{
//		if (j == -1 || str1[i] == str2[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];//指针回溯
//		}
//		if (str1[i] == '\0')//匹配不到
//		{
//			free(next);
//			/*next = NULL;*/
//			return -1;
//		}
//	}
//	free(next);
//	/*next = NULL;*/
//	return i - len;
//}
//int main()
//{
//	char str1[] = "ABAAABBAABABAAABABAABABBABB";
//	char str2[] = "ABABAAABABAA";
//	int ret = KMP(str1, str2);
//	printf("%s\n", (str1 + ret));
//	return 0;
//}

#include <stddef.h>
//struct S1
//{
//	char ch;
//	int i;
//	char sh;
//};
//
//struct S2
//{
//	char ch;
//	char sh;
//	int i;
//};
//
//int main()
//{
//	/*printf("%d\n", (int)offsetof(struct S1, ch));
//	printf("%d\n", (int)offsetof(struct S1, i));
//	printf("%d\n", (int)offsetof(struct S1, sh));*/
//
//	printf("%d\n", (int)offsetof(struct S2, ch));
//	printf("%d\n", (int)offsetof(struct S2, i));
//	printf("%d\n", (int)offsetof(struct S2, sh));
//
//	printf("%d\n", (int)sizeof(struct S2));
//	return 0;
//}

//int is_one(int* arr, int count) 
//{
//    int right = count - 1;
//    while (arr[right] == 0) 
//    {
//        right--;
//    }
//    if (right == -1) 
//    {
//        return 0;
//    }
//    else 
//    {
//        return right;
//    }
//
//}
//int main() 
//{
//    int n = 0, count = 0;
//    int arr[10] = {0};
//    scanf("%d", &n);
//    while (n) 
//    {
//        int tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            arr[count++] = 0;
//        }
//        else
//        {
//            arr[count++] = 1;
//        }
//        n = n / 10;
//    }
//    
//    int ret = is_one(arr, count);
//    if (ret == -1)
//    {
//        printf("%d", 0);
//    }
//    else
//    {
//        for (int i = ret; i >= 0; i--) 
//        {
//            printf("%d", arr[i]);
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    int n = 0, min = 100;
//    scanf("%d", &n);
//    /*int score = 0;*/
//    int arr[6] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//    }
//    for (int i = 0; i < n ; i++)
//    {
//        if (min == arr[i])
//        {
//            continue;
//        }
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//


int main()
{
    int n = 0;
    scanf("%d", &n);
    while ((scanf("%d", &n)) != EOF)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}








