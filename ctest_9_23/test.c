#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*-----------------------------------------------------

用'*'号打印等腰三角形。
要求：从键盘上输入要打印的行数

------------------------------------------------------*/
int main()
{
	int row = 10;
	printf("请输入要打印的行数：");
	scanf("%d", &row);
	for (int i = 1; i < row + 1; i++)
	{
		for (int j = 1; j < row - i + 1; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}