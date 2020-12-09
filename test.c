#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct ListNode* reverseList(struct ListNode* head)
{
	struct ListNode* newHead = NULL;
	struct ListNode* cur = head;
	while (cur != NULL)
	{
		struct ListNode* next = cur->next;

		cur->next = newHead;
		newHead = cur;
		cur = next->next;
	}
	return newHead;
}



struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	struct ListNode* n1 = NULL;
	struct ListNode* n2 = head;
	struct ListNode* n3 = head->next;
	while (n2 != NULL)
	{
		n2->next = n1;
		n1 = n2;
		n2 = n3;
		if (n3 != NULL)
		{
			n3 = n3->next;
		}
	}
	return n1;
}


struct ListNode* removeElements(struct ListNode* head, int val)
{

}



//快慢指针
//可以定义两个指针，一个每次走两步，一个每次只走一步，你就会发现，当快指针走到结尾的时候，慢指针刚好走到中间
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}