#include<iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode* next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
    public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* nextNode, *prevNode = NULL;
        while(head)
        {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};