#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//struct Stu
//{
//	char name[20];
//	int num;
//};
//int main()
//{
//	int a = 10; //����������������a
//	printf("  %zu\n", sizeof(a)); // 4 --> ��������a��ռ�ֽ�����С
//
//	char ch = "A";
//	printf("  %zu\n", sizeof(ch)); // 1 --> �����ַ���ch��ռ�ֽ�����С
//
//	double b = 10.0;
//	printf("  %zu\n", sizeof(b)); // 8 --> ���㸡����b��ռ�ֽ�����С
//
//	struct Stu stu;
//	printf("  %zu\n", sizeof(stu)); // 24 --> ����ṹ������stu��ռ�ֽ�����С���ڴ油�룩
//	return 0;
//}

//int main()
//{
//		//һά����
//	int arr[5] = { 1,2,3,4,5 };
//	//20,arr��Ϊ��������������sizeof�ڲ���������������ܴ�С����λ���ֽ�
//	printf("  %zu\n", sizeof(arr));
//	//4,arr���ǵ�������sizeof�ڲ���Ҳû��&�������������ľ�����Ԫ�ص�ַ����λ���ֽ�
//	printf("  %zu\n", sizeof(arr + 0));
//
//		//��ά����
//	int arr1[3][4] = { 0 };
//	//48,arr1��������sizeof�ڲ���������������ܴ�С��3*4*4=48����λ���ֽ�
//	printf("  %zu\n", sizeof(arr1));
//	//4,arr1���ǵ�������sizeof�ڲ���Ҳû��&�����Լ�����ǵڶ���Ԫ�صĴ�С
//	//��ʱ��ά����Ҫ����Ϊһά���� (arr1 + 1) < -- > arr1[1][j](j=0,1,2,3)�� "��ַ"
//	//��Ҫע����Ǽ�Ȼ�� "��ַ" ��һ�ɰ�4���ֽڴ���(32λ������������)
//	printf("  %zu\n", sizeof(arr1 + 1));
//
//		//�ַ�����
//	char str[] = { 'a','b','c','d','e','f' };
//	//6��str��������sizeof�ڲ���������������ܴ�С����λ���ֽ�
//	printf("  %zu\n", sizeof(str));
//	//4,strû�е�������sizeof�ڲ���Ҳû��&��str��ʾ������Ԫ�� "��ַ"��
//	//(str + 1)����ڶ���Ԫ�ص� "��ַ" ���� "��ַ" ����4���ֽ�(32λ������)
//	printf("  %zu\n", sizeof(str + 1));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	printf("%zu\n", sizeof(num = 10 + 20));
//	//sizeof()�ڱ���ʱ�ͼ�������������num=10�����������sizeof����ı��ʽ
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 20);
//	for (int i = 0; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	//4��p��Ϊ��������������sizeof�ڲ�����������������飬
//	//��sizeof��������㶯̬������ڴ棬���Խ��Ϊ4(32λ������)
//	printf("%zu\n", sizeof(p));
//	free(p);
//	return 0;
//}

//void my_strcpy(char* str, const char* str1)
//{
//	int len = strlen(str1);
//	for (int i = 0; i < len; i++)
//	{
//		*(str + i) = *(str1 + i);
//	}
//}
//int main()
//{
//	char str[20] = "abc";
//	char str1[] = "hello world";
//	my_strcpy(str, str1);
//	printf("%s\n", str);
//	printf("%d\n", strlen(str));
//	return 0;
//}

//int main()
//{
//	char str[20] = "abc";
//	char str1[20] = "asdfd\0fsdfdsf";
//	strcat(str, str1);
//	printf("%s\n", str);
//	return 0;
//}


//int main()
//{
//	size_t num = 10;
//
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	while()
//}
//int main()
//{
//	int str1[] = "abcdef";
//	int str2[] = "cde";
//	my_stratr(str1, str2);
//	return 0;
//}

//ģ��ʵ��strstr()����
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	if (*str2 == '\0')
//		return str2;
//	while (*s2 && *s1)
//	{
//		s1 = str1;
//		while (*s1 == *s2 && *s2 && *s1)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return str1;
//		}
//		s2 = str2;
//		str1++;
//	}
//	if (!*s1)
//		printf("�Ҳ���");
//}
//
//int main()
//{
//	char str1[20] = "aaaaaacccc";
//	char str2[] = "aab";
//	char* ret = NULL;
//	ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}












