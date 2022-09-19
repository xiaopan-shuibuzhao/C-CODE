#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
struct S1
{
	char ch;//自身大小1与默认对齐数8较小值为1
	short a;//2 / 8 --> 2
	int i;//4 / 8 --> 4
};

struct S2
{
	double d;//自身大小8与默认对齐数8较小值8
	char c;//1 / 8 --> 1
	int i;//4 / 8 --> 4
};

struct S3
{
	char c1;//自身大小1与默认对齐数8较小值为1
	struct S1 s1;//8 / 8 --> 8
	double d;//8 / 8 --> 8
};

int main()
{
	struct S1 s1; struct S2 s2; struct S3 s3;
	//最终结构体的大小必须是最大对齐数的整数倍
	printf("%zu\n", sizeof(struct S1));
	printf("%zu\n", sizeof(struct S2));
	printf("%zu\n", sizeof(struct S3));

	return 0;
}

