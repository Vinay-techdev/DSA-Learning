class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
       if(headA == nullptr || headB == nullptr) return nullptr;
       
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while(temp1 != temp2){
            
            temp1 = temp1->next;
            temp2 = temp2->next;

            if(temp1 == temp2) return temp1;

            if(temp1 == nullptr) temp1 = headB;
            if(temp2 == nullptr) temp2 = headA;
        }

        return temp1;
    }
};