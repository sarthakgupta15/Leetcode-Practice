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

//Relatively trivial refactor (the function does basically the same) with recursion and comma operator to make it one-line:

class Solution {
public:
    ListNode* reverseList(ListNode *head, ListNode *nextNode = NULL, ListNode *prevNode = NULL) {
        return head ? reverseList(head->next, (head->next = prevNode, nextNode), head) : prevNode;
    }
};