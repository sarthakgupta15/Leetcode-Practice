/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/

#include<iostream>
using namespace std;

class  ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

/*
Each time, slow go 1 steps while fast go 2 steps.
When fast arrives at the end, slow will arrive right in the middle
*/
class Solution
{
public:
    ListNode* middleNode(ListNode* head)
    {
        ListNode* slow = head, *fast = head;
        while(fast && fast->next)
        {
            slow = slow->next, fast = fast->next->next;
        }
        return slow;
    }
};

