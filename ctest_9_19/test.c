#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
struct S1
{
	char ch;//�����С1��Ĭ�϶�����8��СֵΪ1
	short a;//2 / 8 --> 2
	int i;//4 / 8 --> 4
};

struct S2
{
	double d;//�����С8��Ĭ�϶�����8��Сֵ8
	char c;//1 / 8 --> 1
	int i;//4 / 8 --> 4
};

struct S3
{
	char c1;//�����С1��Ĭ�϶�����8��СֵΪ1
	struct S1 s1;//8 / 8 --> 8
	double d;//8 / 8 --> 8
};

int main()
{
	struct S1 s1; struct S2 s2; struct S3 s3;
	//���սṹ��Ĵ�С����������������������
	printf("%zu\n", sizeof(struct S1));
	printf("%zu\n", sizeof(struct S2));
	printf("%zu\n", sizeof(struct S3));

	return 0;
}

