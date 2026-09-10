#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};

class Solution {
public:
    int findLengthOfLoop(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;
        int count = 0;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;

            if(slow == fast){
                do {
                    count++;
                    slow = slow->next;
                } while(slow != fast);
             break;
            }
        }

        return count;
    }
};