#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//集合 s 包含从 1 到 n 的整数。不幸的是，因为数据错误，导致集合里面某一个数字复制了成了集合里面的另外一个数字的值，导致集合 丢失了一个数字 并且 有一个数字重复 。
//
//给定一个数组 nums 代表了集合 S 发生错误后的结果。
//
//请你找出重复出现的整数，再找到丢失的整数，将它们以数组的形式返回。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode.cn/problems/set-mismatch
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

//int cmp(int* e1, int* e2)
//{
//    return *e1 - *e2;
//}
//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    int* p = malloc(sizeof(int) * 2);//给p申请内存
//    int tmp = 0;
//    *returnSize = 2;
//    qsort(nums, numsSize, sizeof(int), cmp);
//    for (int i = 0; i < numsSize; i++)
//    {
//        int prev = nums[i];
//        if (prev == tmp)
//        {
//            p[0] = tmp;
//        }
//        else if ((prev - tmp) > 1)
//        {
//            p[1] = tmp + 1;
//        }
//        tmp = prev;
//    }
//    if (nums[numsSize - 1] != numsSize)
//    {
//        p[1] = nums[numsSize - 1] + 1;
//    }
//    return p;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zu\n", sizeof(a + 1));
//	printf("%p\n", &a[3]);
//	printf("%p\n", a);
//	printf("%p\n", a + 1);
//	return 0;
//}