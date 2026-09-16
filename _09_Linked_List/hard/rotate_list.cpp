
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//? Optimal 1: Circle Method
class Solution {
public:
    ListNode* findkNode(ListNode* head, int k) {
        
        int cnt = 1;
        while(head != nullptr){
            
            if(cnt == k) return head;

            cnt++;
            head = head->next;
        }

        return head;
    }


public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || k == 0) return head;

        ListNode* tail = head;
        int len = 1;

        while(tail->next){
            tail = tail->next;
            len++;
        }

        k = k % len;

        if(k == 0) return head;

        tail->next = head;
        ListNode* lastNode = findkNode(head, len - k);

        head = lastNode->next;
        lastNode->next = nullptr;

        return head;
    }
};


//  //? Optimal 2: Multi-Reversal Method
// class Solution {
// public:
//     ListNode* reverselist(ListNode* head) {

//         ListNode* prev = nullptr;
//         ListNode* curr = head;

//         while(curr != nullptr){
//             ListNode* temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }

//         return prev;
//     }

// public:
//     ListNode* rotateRight(ListNode* head, int k) {

//         if(!head || !head->next || k == 0) return head;

//         ListNode* temp = head;
//         int n = 0;

//         while(temp != nullptr){
//             temp = temp->next;
//             n++;
//         }

//         k %= n;
//         if(k == 0) return head;

//         temp = head;

//         for(int i = 1; i < n - k; i++) {
//             temp = temp->next;
//         }

//         ListNode* nextNode = temp->next;
//         temp->next = nullptr; // Split into two lists

//         // Reverse both parts
//         ListNode* head1 = reverselist(head);
//         ListNode* head2 = reverselist(nextNode);

//         // Find the tail of head1 to connect head2
//         ListNode* tail1 = head1;
//         while(tail1->next != nullptr) {
//             tail1 = tail1->next;
//         }

//         tail1->next = head2;

//         // Reverse the entire combined list for the final result
//         return reverselist(head1);
//     }
// };