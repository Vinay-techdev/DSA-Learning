struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* slow = head;
        ListNode* fast = head;

        // 1. Move fast pointer n steps ahead
        for(int i = 0; i < n; i++) fast = fast->next;

        // 2. If fast reached end, the head itself needs to be removed
        if(fast == nullptr) { 
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
        
        // 3. Move both pointers until fast reaches the last node
        while(fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        // 4. Remove the N-th node from end
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;

        return head;
    }
};