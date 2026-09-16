
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

public:
    ListNode* reverseList(ListNode* head){

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }

public:
    ListNode* findKNode(ListNode* head, int k){
        k--;

        while(head != nullptr && k > 0){
            head = head->next;
            k--;
        }

        return head;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp != nullptr){
           
            ListNode* kNode = findKNode(temp, k);
            
            if(kNode == nullptr){
                if(prev) prev->next = temp;
                break;
            }
            
            ListNode* nextNode = kNode->next;
            kNode->next = nullptr;

            reverseList(temp);

            //? If first reverse list
            if(temp == head){
                head = kNode;
            }
            else {
                prev->next = kNode;
            }

            prev = temp;
            temp = nextNode;
        }

        return head;
    }
};