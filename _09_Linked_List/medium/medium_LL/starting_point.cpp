struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow) break;
        }

         if(!(fast && fast->next)) return nullptr;

         while(head != slow){
            head = head->next;
            slow = slow->next;
         }

         return head;
    }
};