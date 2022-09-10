#define _CRT_SECURE_N0_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

////模拟实现strlen（）函数
//int my_strlen(const char* str)
//{
//	//断言，防止传入参数为空字符
//	assert(str);
//	char* p = str;
//	while (*str++);
//	return str - p - 1;
//}
//
//int main()
//{
//	char str[] = "abcd";
//	int ret = 0;
//	ret = my_strlen(str);
//	printf("%d\n", ret);
//	return 0;
//}

////模拟实现strcat（）函数
//void my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++);
//	str1--;
//	while (*str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//}
//int main()
//{
//	char str1[20] = "hello \0xxxxxxxxx";
//	char str2[] = "world";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

////模拟实现strcmp（）函数
//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2 && *str2 && *str1)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else if (*str1 < *str2)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//
//	/*char str1[] = "abcqdef";
//	char str2[] = "abcdefhfff";
//
//	char str1[] = "abcdef";
//	char str2[] = "abc";*/
//	printf("%d\n",my_strcmp(str1, str2));
//	return 0;
//}
//

////模拟实现strcpy()函数
//void my_strcpy(char* str1, const char* str2)
//{
//	if (strlen(str1) < strlen(str2))
//		return;
//	while (*str2 && *str1)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//}
//int main()
//{
//	char str1[] = "xxxxxxxxxxxx";
//	char str2[] = "hello";
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

//int main()
//{
//	char str1[] = "xxx";
//	char str2[] = "hello";
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

////模拟实现strstr（）函数
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	while (*str1)
//	{
//		s1 = str1;
//		while (*s1 == *s2 && *s2 && *s1)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//			return str1;
//		s2 = str2;
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "abcdefghi";
//	char str2[] = "def";
//	char* p = NULL;
//	p = my_strstr(str1, str2);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char str1[] = "abcdefghi";
//	char str2[] = "dez";
//	printf("%s\n", strstr(str1, str2));
//	return 0;
//}

//int main()
//{
//	char str[] = { 'a','b','c','d','e','\0' };
//	//5,计算字符个数，遇到'\0'就停止，不包括'\0'
//	printf("%d\n", strlen(str));
//	//6,你有多少个字符就计算多少个字符
//	printf("%zu\n", sizeof(str));
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()
//{
//	char str[] = { 'a','b','c','d','e','f' };
//	//计算字符数组的字符个数，但是这里没有'\0',所以没有结束标志
//	//这里打印的是一个随机值，具体多少看内存布局
//	printf("%d\n", strlen(str));
//	//随机值，这里str是首元素地址(str + 0)还是首元素地址
//	printf("%d\n", strlen(str + 0));
//	//语法错误，对首元素解引用得到首元素地址的值'a',而不是地址
//	//strlen函数要求传入参数为一个值的地址，
//	printf("%d\n", strlen(*str));
//	//语法错误，str[1] <--> *(str + 1)得到也是一个值，而不是地址 
//	printf("%d\n", strlen(str[1]));
//	return 0;
//}

//int main()
//{
//	char str[] = "abcdefghi";
//	//9,str作为首元素地址，往后计算字符个数，遇'\0'停止
//	printf("%d\n", strlen(str));
//	//9，(str + 0)依旧为首元素地址，计算字符个数
//	printf("%d\n", strlen(str + 0));
//	//语法错误，对首元素解引用得到字符'a',而不是地址
//	printf("%d\n", strlen(*str));
//	//语法错误，str[1] <--> *(str + 1)与上例题一致
//	printf("%d\n", strlen(str[1]));
//	return 0;
//}