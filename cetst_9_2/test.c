#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//插入排序练习
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int i,j;
//	for (i = 1; i < sz; i++)
//	{
//		int tmp = arr[i];
//		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//快速排序练习
//void quicksort(int* arr, int left, int right)
//{
//	if (left > right)
//		return;
//	int i = left, j = right;
//	int pivotkey = arr[left];
//	while (i < j)
//	{
//		while (i < j && arr[j] > pivotkey)
//			j--;
//		arr[i] = arr[j];
//		while (i < j && arr[i] < pivotkey)
//			i++;
//		arr[j] = arr[i];
//	}
//	arr[i] = pivotkey;
//
//	quicksort(arr, left, i - 1);
//	quicksort(arr, i + 1, right);
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof arr / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	quicksort(arr, left, right);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//struct link* AppendNode(struct link* head);
//void DisplayNode(struct link* head);
//void DeleteMemory(struct link* head);
//
////定义结构体
//struct link
//{
//	int data;          //数据域
//	struct link* next; //指针域
//};
//
//int main()
//{
//	int count = 0;  //记录创建节点数
//	char c = 'a';
//	struct link* head = NULL;
//	printf("Do you want to append a new node('Y' or 'NO')");
//	scanf("%c", &c);
//	while (c == 'Y' || c == 'y')
//	{
//		head = AppendNode(head);
//
//		DisplayNode(head);
//		
//		printf("Do you want to append a new node( 'Y' or 'N')?\n");
//		scanf("%c", &c);
//		count++;
//		
//	}
//	printf("%d new node have been appended!\n", count);
//	DeleteMemory(head);  // 释放占用内存
//	return 0;
//}
//
//struct link* AppendNode(struct link* head)
//{
//	struct link* p = NULL, * pr = head;
//	int data;
//	p = (struct link*)malloc(sizeof(struct link)); // 为指针p申请内存空间，必须操作，因为p是新创建的节点
//	if (p == NULL) //如果内存申请失败，则退出程序
//	{
//		printf("No enough memory to allocate !\n");
//		exit(0);
//	}
//	if (head == NULL)
//	{
//		head = p;
//	}
//	else
//	{
//		while (pr->next != NULL)
//		{
//			pr = pr->next;
//		}
//		pr->next = p;
//	}
//	printf("please input node data:");
//	scanf("%d", &data);
//	p->data = data;
//	p->next = NULL;
//	return head;
//}
//
//void DisplayNode(struct link* head)
//{
//	struct link* p = head;
//	int j = 1;        //定义j记录这是第几个数值
//	while (p != NULL)
//	{
//		printf("%5d%10d\n", j, p->data);
//		p = p->next;
//		j++;
//	}
//}
//
//void DeleteMemory(struct link* head)
//{
//	struct link* p = head, * pr = NULL;
//	while (p != NULL)
//	{
//		pr = p;
//		p = p->next;
//		free(pr); //释放此时pr指向节点的内存
//	}
//}



//struct link* AppendNode(struct link* head);
//void DisplayNode(struct link* head);
//void DeleteMemory(struct link* head);
////定义结构体 
//struct link {
//	int data; 				//定义数据域 
//	struct link* next; 			//定义指针域 
//};
//int main() {
//	int i = 0;         			//定义i，记录创建的节点数 
//	char c;
//	struct link* head = NULL;		//创建头指针，初始化为NULL 
//	printf("DO you wang to append a new node(Y or N)?");
//	scanf(" %c", &c);
//	while (c == 'Y' || c == 'y') {	//如果确定继续添加结点 
//		head = AppendNode(head);	//通过函数获得链表的地址，AppendNode函数返回的是链表的头指针
//		//可以根据头指针指向的地址来获取链表中保存的数据 
//		DisplayNode(head);			//根据头指针打印链表 
//		printf("DO you want to append a new node(Y or N)?");
//		scanf(" %c", &c);
//		i++;
//	}
//	printf("%d new nodes hava been appended!\n", i);
//	DeleteMemory(head);			//释放占用的内存 
//}
//struct link* AppendNode(struct link* head) {    //声明创建节点函数 
//	struct link* p = NULL, * pr = head;      //创建p指针，初始化为NULL；创建pr指针，通过pr指针来给指针域赋值 
//	int data;
//	p = (struct link*)malloc(sizeof(struct link)); //为指针p申请内存空间，必须操作，因为p是新创建的节点 
//	if (p == NULL) {			//如果申请内存失败，则退出程序 
//		printf("NO enough momery to allocate!\n");
//		exit(0);
//	}
//	if (head == NULL) {		//如果头指针为NULL,说明现在链表是空表 
//		head = p;								//使head指针指向p的地址(p已经通过malloc申请了内存，所以有地址） 
//	}
//	else {										//此时链表已经有头节点 ，再一次执行了AppendNode函数 
//		//注：假如这是第二次添加节点
////因为第一次添加头节点时，pr = head，和头指针一样指向头节点的地址 
//		while (pr->next != NULL) {		//当pr指向的地址，即此时的p的指针域不为NULL(即p不是尾节点) 
//			pr = pr->next;	//使pr指向头节点的指针域
//		}
//		pr->next = p;	//使pr的指针域指向新键节点的地址，此时的next指针域是头节点的指针域 
//	}
//	printf("Input node data:");
//	scanf("%d", &data);
//	p->data = data; 			//给p的数据域赋值 
//	p->next = NULL;			//新添加的节点位于表尾，所以它的指针域为NULL 
//	return head;			//返回head的地址 
//}
//void DisplayNode(struct link* head) {         	//输出函数，打印链表 
//	struct link* p = head;			// 定义p指针使其指向头节点 
//	int j = 1;									//定义j记录这是第几个数值 
//	while (p != NULL) {		//因为p = p->next,所以直到尾节点打印结束 
//		printf("%5d%10d\n", j, p->data);
//		p = p->next;		//因为节点已经创建成功，所以p的指向由头节点指向下一个节点(每一个节点的指针域都指向了下一个节点) 
//		j++;
//	}
//}
//void DeleteMemory(struct link* head) {			//释放资源函数 
//	struct link* p = head, * pr = NULL;	        //定义p指针指向头节点 
//	while (p != NULL) {				//当p的指针域不为NULL 
//		pr = p;									//将每一个节点的地址赋值给pr指针 
//		p = p->next;			        //使p指向下一个节点 
//		free(pr);								//释放此时pr指向节点的内存 
//	}
//}
//













