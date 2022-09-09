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
//	int a = 10; //定义整形数据类型a
//	printf("  %zu\n", sizeof(a)); // 4 --> 计算整形a所占字节数大小
//
//	char ch = "A";
//	printf("  %zu\n", sizeof(ch)); // 1 --> 计算字符型ch所占字节数大小
//
//	double b = 10.0;
//	printf("  %zu\n", sizeof(b)); // 8 --> 计算浮点型b所占字节数大小
//
//	struct Stu stu;
//	printf("  %zu\n", sizeof(stu)); // 24 --> 计算结构体类型stu所占字节数大小（内存补齐）
//	return 0;
//}

//int main()
//{
//		//一维数组
//	int arr[5] = { 1,2,3,4,5 };
//	//20,arr作为数组名单独放在sizeof内部，计算的是数组总大小，单位是字节
//	printf("  %zu\n", sizeof(arr));
//	//4,arr并非单独放在sizeof内部，也没有&，所以这里计算的就是首元素地址，单位是字节
//	printf("  %zu\n", sizeof(arr + 0));
//
//		//二维数组
//	int arr1[3][4] = { 0 };
//	//48,arr1单独放在sizeof内部，计算的是数组总大小，3*4*4=48，单位是字节
//	printf("  %zu\n", sizeof(arr1));
//	//4,arr1并非单独放在sizeof内部，也没有&，所以计算的是第二个元素的大小
//	//此时二维数组要想象为一维数组 (arr1 + 1) < -- > arr1[1][j](j=0,1,2,3)的 "地址"
//	//还要注意的是既然是 "地址" 就一律按4个字节处理(32位机器的条件下)
//	printf("  %zu\n", sizeof(arr1 + 1));
//
//		//字符数组
//	char str[] = { 'a','b','c','d','e','f' };
//	//6，str单独放在sizeof内部，计算的是数组总大小，单位是字节
//	printf("  %zu\n", sizeof(str));
//	//4,str没有单独放在sizeof内部，也没有&，str表示的是首元素 "地址"，
//	//(str + 1)计算第二个元素的 "地址" ，是 "地址" 就是4个字节(32位机器下)
//	printf("  %zu\n", sizeof(str + 1));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	printf("%zu\n", sizeof(num = 10 + 20));
//	//sizeof()在编译时就计算出结果，所以num=10，并不会计算sizeof里面的表达式
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
//	//4，p作为数组名单独放在sizeof内部，计算的是整个数组，
//	//而sizeof并不会计算动态分配的内存，所以结果为4(32位条件下)
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

//模拟实现strstr()函数
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
//		printf("找不到");
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












