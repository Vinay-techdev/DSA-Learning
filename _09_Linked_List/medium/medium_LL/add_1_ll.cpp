struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
    ListNode(int data1)
    {
        val = data1;
        next = nullptr;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:
    ListNode* reverse(ListNode* head){

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
    ListNode *addOne(ListNode *head) {
        ListNode* temp = head;

        int ans = 0;

        while(temp != nullptr){
            ans = ans*10 + temp->val;
            temp = temp->next;
        }

        ans = ans + 1;

        temp = head;

        while(temp != nullptr){
            temp->val = ans%10;
            ans = ans/10;
            temp = temp->next;
        }

        head = reverse(head);

        if(ans != 0){
            ListNode* newNode = new ListNode(ans);
            newNode->next = head;
            head = newNode;
        }

        return head;
    }
};