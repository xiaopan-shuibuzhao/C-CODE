#define _CRT_SECURE_N0_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

////ģ��ʵ��strlen��������
//int my_strlen(const char* str)
//{
//	//���ԣ���ֹ�������Ϊ���ַ�
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

////ģ��ʵ��strcat��������
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

////ģ��ʵ��strcmp��������
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

////ģ��ʵ��strcpy()����
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

////ģ��ʵ��strstr��������
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
//	//5,�����ַ�����������'\0'��ֹͣ��������'\0'
//	printf("%d\n", strlen(str));
//	//6,���ж��ٸ��ַ��ͼ�����ٸ��ַ�
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
//	//�����ַ�������ַ���������������û��'\0',����û�н�����־
//	//�����ӡ����һ�����ֵ��������ٿ��ڴ沼��
//	printf("%d\n", strlen(str));
//	//���ֵ������str����Ԫ�ص�ַ(str + 0)������Ԫ�ص�ַ
//	printf("%d\n", strlen(str + 0));
//	//�﷨���󣬶���Ԫ�ؽ����õõ���Ԫ�ص�ַ��ֵ'a',�����ǵ�ַ
//	//strlen����Ҫ�������Ϊһ��ֵ�ĵ�ַ��
//	printf("%d\n", strlen(*str));
//	//�﷨����str[1] <--> *(str + 1)�õ�Ҳ��һ��ֵ�������ǵ�ַ 
//	printf("%d\n", strlen(str[1]));
//	return 0;
//}

//int main()
//{
//	char str[] = "abcdefghi";
//	//9,str��Ϊ��Ԫ�ص�ַ����������ַ���������'\0'ֹͣ
//	printf("%d\n", strlen(str));
//	//9��(str + 0)����Ϊ��Ԫ�ص�ַ�������ַ�����
//	printf("%d\n", strlen(str + 0));
//	//�﷨���󣬶���Ԫ�ؽ����õõ��ַ�'a',�����ǵ�ַ
//	printf("%d\n", strlen(*str));
//	//�﷨����str[1] <--> *(str + 1)��������һ��
//	printf("%d\n", strlen(str[1]));
//	return 0;
//}