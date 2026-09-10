struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoSortedLinkedLists(ListNode* LL1, ListNode* LL2) {
        
        // Create a dummy node (array)
        ListNode* dummyNode = new ListNode(-1);

        // Temp pointer to build merged list
        ListNode* temp = dummyNode;

        while(LL1 != nullptr && LL2 != nullptr){
            
            if(LL1->val <= LL2->val){
                temp->next = LL1;
                LL1 = LL1->next;
            } 
            else {
                temp->next = LL2;
                LL2 = LL2->next;
            }

            // Move temp pointer
            temp = temp->next;
        }

        if(LL1) temp->next = LL1;
        else temp->next = LL2;

        return dummyNode->next;
    }

public:
    ListNode* findMiddle(ListNode* head) {

        // fast and slow Techinque to find middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

public:
    ListNode* sortList(ListNode* head) {

         // Base case: empty or single node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* middle = findMiddle(head);
        
        ListNode* left = head;
        ListNode* right = middle->next;
        
        middle->next = nullptr;

        left = sortList(left);
        right = sortList(right);

        return mergeTwoSortedLinkedLists(left, right);
    }
};