#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>


/*-------------------------------------------------------------

һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
��дһ�������ҳ�������ֻ����һ�ε����֡�

---------------------------------------------------------------*/

//int cmp(const int* e1, const int* e2)
//{
//	return *e1 - *e2;
//}

//--------------------------------------------------------------
//�����ⷨ
//int* FindOne(int* nums, int numsSize, int* returnSize)
//{
//	assert(nums);
//	if (numsSize == 2)
//		return nums;
//	int* p = (int*)malloc(2 * sizeof(int));
//	int count = 0;
//	*returnSize = 2;
//	if (p == NULL)
//		return;
//	for (int i = 0; i < numsSize; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < numsSize; j++)
//		{
//			if (nums[j] == nums[i] && j != i)
//			{
//				flag = 0;
//			}
//		}
//		if(flag)
//			p[count++] = nums[i];
//	}
//	return p;
//	free(p);
//	p = NULL;
//}
////--------------------------------------------------------------
////�Ż��ڵ��
//int* FindOne(int* nums, int numsSize, int* returnSize)
//{
//	assert(nums);
//	if (numsSize == 2)
//		return nums;
//	int* p = (int*)malloc(2 * sizeof(int));
//	int count = 0;
//	*returnSize = 2;
//	if (p == NULL)
//		return;
//	qsort(nums, numsSize, sizeof(int), cmp);
//	for (int i = 0; i < numsSize - 1; i+=2)
//	{
//		if (nums[i] != nums[i + 1])
//		{
//			p[count++] = nums[i];
//			i--;
//		}
//		if(count == 2)
//		{
//			return p;
//		}
//	}
//	p[count] = nums[numsSize - 1];
//	return p;
//	free(p);
//	p = NULL;
//}
////----------------------------------------------------------------
//
//int main()
//{
//	int nums[] = { 1,2,3,4,5,6,7,1,2,3,4,5,6,7,8,9 };
//	int numsSize = sizeof nums / sizeof(nums[0]);
//	int returnSize = 0;
//	int* ret = FindOne(nums, numsSize, &returnSize);
//
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}

/*-----------------------------------------------------------

ģ��ʵ��strncpy

------------------------------------------------------------*/

//char* my_strncpy(char* str1, const char* str2, size_t k)
//{
//	assert(str1 && str2);
//	while (k--)
//	{
//		*(str1 + k) = *(str2 + k);
//	}
//	return str1;
//}
//int main()
//{
//	char str1[] = "I like Java";
//	char str2[] = "HelloWorld";
//	size_t k = 5;
//	my_strncpy(str1, str2, k);
//	printf("%s\n", str1);
//	return 0;
//}


/*----------------------------------------------------------------
ģ��ʵ��strncat
------------------------------------------------------------------*/

//char* my_strncpy(char* str1, const char* str2, size_t k)
//{
//	char* p = str1;
//	while (*str1++);
//	str1--;
//	while (*str2)
//	{
//		*(str1++) = *(str2);
//		str2++;
//	}
//	return p;
//}
//int main()
//{
//	char str1[10] = "abcd";
//	char str2[] = "efghi";
//	size_t k = strlen(str2);
//	my_strncpy(str1, str2, k);
//	printf("%s\n", str1);
//	return 0;
//}

/*--------------------------------------------------------------------------------------------------------------------------

ģ��ʵ��atoi
ͨ�������ĵ���atoi�����Ĺ���λ�������ַ���ת��Ϊ����
�ú������ȸ�����Ҫ�������������Ŀո��ַ����� �е� �ո��ַ�����ֱ���ҵ���һ���ǿո��ַ���
Ȼ�󣬴Ӵ��ַ���ʼ�����ÿ�ѡ������ĸ�ӺŻ���ţ���������ܶ���� 10 Ϊ���������֣��������ǽ���Ϊ��ֵ��
���ַ������԰��������������ַ�֮��������ַ�����Щ�ַ��������ԣ����ҶԴ˺�������Ϊû��Ӱ�졣
��� �еĵ�һ���ǿո��ַ����в�����Ч������������������� Ϊ�ջ�������ո��ַ��������ڴ������У��򲻻�ִ���κ�ת���������㡣

----------------------------------------------------------------------------------------------------------------------------*/

//int my_atoi(const char* str)
//{
//	assert(str);
//	int count = 0,value = 0;
//	while (*str == " ")
//	{
//		str++;
//	}
//	while (( * str > '0' && *str < '9'))
//	{
//		count++;
//		str++;
//	}
//	str--;
//	for (int i = 0; i < count; i++)
//	{
//		value =value + (pow(10,i) * (*str - '0'));
//		str--;
//	}
//	return value;
//}
//int main()
//{
//	char str[] = "6688";
//	/*my_atoi(str);*/
//	printf("%d\n", my_atoi(str));
//	return 0;
//}