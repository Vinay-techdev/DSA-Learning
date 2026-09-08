struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseLinkedList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* temp = head;
        while(temp != nullptr){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;

    }

public:
    bool isPalindrome(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverseLinkedList(slow->next);

        ListNode* first = head; ListNode* second = newHead;

        while(second != nullptr){
           
            if(first->val != second->val) {
                reverseLinkedList(newHead);
                return false;
            }

            first = first->next;
            second = second->next;
        }

        reverseLinkedList(newHead);

        return true;
    }
};