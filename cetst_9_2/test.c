#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����������ϰ
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

//����������ϰ
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
////����ṹ��
//struct link
//{
//	int data;          //������
//	struct link* next; //ָ����
//};
//
//int main()
//{
//	int count = 0;  //��¼�����ڵ���
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
//	DeleteMemory(head);  // �ͷ�ռ���ڴ�
//	return 0;
//}
//
//struct link* AppendNode(struct link* head)
//{
//	struct link* p = NULL, * pr = head;
//	int data;
//	p = (struct link*)malloc(sizeof(struct link)); // Ϊָ��p�����ڴ�ռ䣬�����������Ϊp���´����Ľڵ�
//	if (p == NULL) //����ڴ�����ʧ�ܣ����˳�����
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
//	int j = 1;        //����j��¼���ǵڼ�����ֵ
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
//		free(pr); //�ͷŴ�ʱprָ��ڵ���ڴ�
//	}
//}



//struct link* AppendNode(struct link* head);
//void DisplayNode(struct link* head);
//void DeleteMemory(struct link* head);
////����ṹ�� 
//struct link {
//	int data; 				//���������� 
//	struct link* next; 			//����ָ���� 
//};
//int main() {
//	int i = 0;         			//����i����¼�����Ľڵ��� 
//	char c;
//	struct link* head = NULL;		//����ͷָ�룬��ʼ��ΪNULL 
//	printf("DO you wang to append a new node(Y or N)?");
//	scanf(" %c", &c);
//	while (c == 'Y' || c == 'y') {	//���ȷ��������ӽ�� 
//		head = AppendNode(head);	//ͨ�������������ĵ�ַ��AppendNode�������ص��������ͷָ��
//		//���Ը���ͷָ��ָ��ĵ�ַ����ȡ�����б�������� 
//		DisplayNode(head);			//����ͷָ���ӡ���� 
//		printf("DO you want to append a new node(Y or N)?");
//		scanf(" %c", &c);
//		i++;
//	}
//	printf("%d new nodes hava been appended!\n", i);
//	DeleteMemory(head);			//�ͷ�ռ�õ��ڴ� 
//}
//struct link* AppendNode(struct link* head) {    //���������ڵ㺯�� 
//	struct link* p = NULL, * pr = head;      //����pָ�룬��ʼ��ΪNULL������prָ�룬ͨ��prָ������ָ����ֵ 
//	int data;
//	p = (struct link*)malloc(sizeof(struct link)); //Ϊָ��p�����ڴ�ռ䣬�����������Ϊp���´����Ľڵ� 
//	if (p == NULL) {			//��������ڴ�ʧ�ܣ����˳����� 
//		printf("NO enough momery to allocate!\n");
//		exit(0);
//	}
//	if (head == NULL) {		//���ͷָ��ΪNULL,˵�����������ǿձ� 
//		head = p;								//ʹheadָ��ָ��p�ĵ�ַ(p�Ѿ�ͨ��malloc�������ڴ棬�����е�ַ�� 
//	}
//	else {										//��ʱ�����Ѿ���ͷ�ڵ� ����һ��ִ����AppendNode���� 
//		//ע���������ǵڶ�����ӽڵ�
////��Ϊ��һ�����ͷ�ڵ�ʱ��pr = head����ͷָ��һ��ָ��ͷ�ڵ�ĵ�ַ 
//		while (pr->next != NULL) {		//��prָ��ĵ�ַ������ʱ��p��ָ����ΪNULL(��p����β�ڵ�) 
//			pr = pr->next;	//ʹprָ��ͷ�ڵ��ָ����
//		}
//		pr->next = p;	//ʹpr��ָ����ָ���¼��ڵ�ĵ�ַ����ʱ��nextָ������ͷ�ڵ��ָ���� 
//	}
//	printf("Input node data:");
//	scanf("%d", &data);
//	p->data = data; 			//��p��������ֵ 
//	p->next = NULL;			//����ӵĽڵ�λ�ڱ�β����������ָ����ΪNULL 
//	return head;			//����head�ĵ�ַ 
//}
//void DisplayNode(struct link* head) {         	//�����������ӡ���� 
//	struct link* p = head;			// ����pָ��ʹ��ָ��ͷ�ڵ� 
//	int j = 1;									//����j��¼���ǵڼ�����ֵ 
//	while (p != NULL) {		//��Ϊp = p->next,����ֱ��β�ڵ��ӡ���� 
//		printf("%5d%10d\n", j, p->data);
//		p = p->next;		//��Ϊ�ڵ��Ѿ������ɹ�������p��ָ����ͷ�ڵ�ָ����һ���ڵ�(ÿһ���ڵ��ָ����ָ������һ���ڵ�) 
//		j++;
//	}
//}
//void DeleteMemory(struct link* head) {			//�ͷ���Դ���� 
//	struct link* p = head, * pr = NULL;	        //����pָ��ָ��ͷ�ڵ� 
//	while (p != NULL) {				//��p��ָ����ΪNULL 
//		pr = p;									//��ÿһ���ڵ�ĵ�ַ��ֵ��prָ�� 
//		p = p->next;			        //ʹpָ����һ���ڵ� 
//		free(pr);								//�ͷŴ�ʱprָ��ڵ���ڴ� 
//	}
//}
//













