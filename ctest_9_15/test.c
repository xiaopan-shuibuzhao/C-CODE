#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//
////×Ö·û´®ÄæÐòÁ·Ï°
//void reverse(char* str,size_t len)
//{
//	assert(str);
//	size_t left = 0, right = len - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[20] = "abcdefghi";
//	size_t len = strlen(str);
//	reverse(str,len);
//	printf("%s\n", str);
//	return 0;
//}

////×óÐýk¸ö×Ö·û
//void left_move(char* str, int k, size_t len)
//{
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		for (int j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char str[20] = "abcdefghi";
//	size_t len = strlen(str);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(str, k, len);
//	printf("%s\n", str);
//	return 0;
//}

////×óÐýk¸ö×Ö·û
//void left_move(char* str, int k, size_t len)
//{
//	for (int i = 0; i < k; i++)
//	{
//		char* p = str;
//		for (int j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = *p;
//	}
//}
//int main()
//{
//	char str[20] = "abcdefghi";
//	size_t len = strlen(str);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(str, k, len);
//	printf("%s\n", str);
//	return 0;
//}

////CÓïÑÔÊµÏÖKMPËã·¨
//#include <malloc.h>
//void my_next(int* next, const char* str2, int len)
//{
//	int j = 1, k = 0;
//	next[0] = -1;
//	next[1] = 0;
//	/*next[2] = 1;*/
//	//A B A B A A A B A B A A
//	while (j < len )
//	{
//		if (k == -1 ||str2[j] == str2[k])
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
//void KMP(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	int len = (int)strlen(str2);
//	int* next = (int*)malloc(sizeof(int) * len);
//	
//	assert(next);
//	my_next(next,str2, len);
//	
//}
//int main()
//{
//	/*int next[14] = { 0 };*/
//	char str1[] = "ABAABBABAABABAAAB";
//	char str2[] = "ABABAAABABAA";
//	KMP(str1, str2);
//	return 0;
//}

//void get_next(char s[], int next[]);
//int KMP(char s1[], char s2[], int next[]);
//int main() 
//{
//    int i = 0;
//    int next[1000];
//    char s2[] = "ABABAAABABAA";
//    char s1[] = "ABABABAABABAAABABAA";
//    int len = (int)strlen(s2);
//    get_next(s2, next);
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", next[i]);
//    }
//   /* i = KMP(s1, s2, next);
//    printf("%d\n", i);
//    return 0;*/
//}
//void get_next(char s[], int next[])
//{
//    int len = 0;
//    int i = 0;
//    int j = -1;
//    next[0] = -1;
//    len = strlen(s);
//    //
//    while (i < len - 1)
//    {
//        if (j == -1 || s[i] == s[j])
//        {
//            i++;
//            j++;
//            next[i] = j;
//        }
//        else
//        {
//            j = next[j];
//        }
//    }
//}
//int KMP(char s1[], char s2[], int next[])
//{
//    int i = 0;
//    int j = 0;
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    //ABABABAABABAAABABAA
//    //ABABAAABABAA
//    while (i < len1 && j < len2)
//    {
//        if (j == -1 || s1[i] == s2[j])
//        {
//            i++;
//            j++;
//        }
//        else
//        {
//            j = next[j];
//        }
//    }
//    if (j >= len2)
//        return i - len2 + 1;
//    else
//        return -1;
//}
