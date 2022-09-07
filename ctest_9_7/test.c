#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* pa = (int*)(&a + 1); //2
//	printf("%d %d\n", *(a + 1), *(pa - 1)); //5
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	printf("%x,%x", p1[-1], *p2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//{1,3,5}
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	printf("%d\n", p[1]);
//	/*printf("%d\n", a[0][0]);*/
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };// "FIRST" "POINT" "NEW" "ENTER"
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}