#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


/*-----------------------------------------------------

��'*'�Ŵ�ӡ���������Ρ�
Ҫ�󣺴Ӽ���������Ҫ��ӡ������

------------------------------------------------------*/
int main()
{
	int row = 10;
	printf("������Ҫ��ӡ��������");
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