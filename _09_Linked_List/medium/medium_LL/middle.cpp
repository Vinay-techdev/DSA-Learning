#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int value) : val(value), next(nullptr) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){

            // Move slow by one node
            slow = slow->next;
  
            // Move fast by two nodes
            fast = fast->next->next;
        }

        // Slow is now pointing to the middle node and For even length, it points to the second middle
        return slow;
    }
};


int main() {
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    ListNode* middleNode = solution.middleNode(head);

    cout << "The middle node value is: " << middleNode->val << endl;

    return 0;
};